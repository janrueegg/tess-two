
set(SOURCES ambigs.cpp basedir.cpp bits16.cpp bitvector.cpp ccutil.cpp clst.cpp
			elst2.cpp elst.cpp errcode.cpp globaloc.cpp hashfn.cpp indexmapbidi.cpp
			mainblk.cpp memry.cpp serialis.cpp strngs.cpp tessdatamanager.cpp tprintf.cpp
			unichar.cpp unicharmap.cpp unicharset.cpp unicodes.cpp params.cpp)

set(HEADERS basedir.h errcode.h fileerr.h genericvector.h helpers.h host.h memry.h
			ndminx.h ocrclass.h params.h platform.h serialis.h strngs.h tesscallback.h
			unichar.h unicharmap.h unicharset.h)

set(NON_INST_HEADERS ambigs.h bits16.h bitvector.h ccutil.h clst.h elst2.h
				     elst.h globaloc.h hashfn.h hosthplb.h indexmapbidi.h lsterr.h
					 mfcpch.h notdll.h nwmain.h qrsequence.h secname.h
					 sorthelper.h stderr.h tessdatamanager.h tprintf.h unicity_table.h
					 unicodes.h)

add_definitions(-DWINDLLNAME=\"tesseract\")
add_library(ccutil STATIC ${SOURCES} ${HEADERS} ${NON_INST_HEADERS})
