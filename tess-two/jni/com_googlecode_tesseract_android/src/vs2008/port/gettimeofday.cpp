///////////////////////////////////////////////////////////////////////
// File:        gettimeofday.cpp
// Description: Implementation of gettimeofday based on leptonica
// Author:      tomp2010, zdenop
// Created:     Tue Feb 21 21:38:00 CET 2012
//
// (C) Copyright 2012, Google Inc.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
///////////////////////////////////////////////////////////////////////

#include <allheaders.h>
#include "gettimeofday.h"

#ifdef WINAPI_FAMILY
#include <windows.h>
#include <cstdint>


int gettimeofday(struct timeval *tp, struct timezone *tzp)
{
	if(tp == NULL)
	{
		return -1;
	}

	FILETIME systemTime;
	GetSystemTimeAsFileTime(&systemTime);

	SYSTEMTIME epochStart;
	epochStart.wYear = 1970;
	epochStart.wMonth = 1;
	epochStart.wDayOfWeek = 4;
	epochStart.wDay = 1;
	epochStart.wHour = 0;
	epochStart.wMinute = 0;
	epochStart.wSecond = 0;
	epochStart.wMilliseconds = 0;

	FILETIME epochStartFt;
	SystemTimeToFileTime(&epochStart, &epochStartFt);

	const uint64_t start = static_cast<uint64_t>(epochStartFt.dwHighDateTime) << 32 + static_cast<uint64_t>(epochStartFt.dwLowDateTime);
	const uint64_t now = static_cast<uint64_t>(systemTime.dwHighDateTime) << 32 + static_cast<uint64_t>(systemTime.dwLowDateTime);
	const uint64_t diff = now - start; // Increments since the begin of the Unix epoch in 100ns steps

	tp->tv_sec = diff / 10*1000*1000;
	tp->tv_usec = (diff - 10*1000*1000*static_cast<uint64_t>(tp->tv_sec)) / 10;
	return 0;
}
#else
int gettimeofday(struct timeval *tp, struct timezone *tzp) {
  l_int32 sec, usec;
  if (tp == NULL)
    return -1;

  l_getCurrentTime(&sec, &usec);
  tp->tv_sec = sec;
  tp->tv_usec = usec;
  return 0;
}
#endif
