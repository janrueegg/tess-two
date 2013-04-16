
set(SOURCES bitvec.cpp callcpp.cpp cutil.cpp cutil_class.cpp danerror.cpp efio.cpp
			emalloc.cpp freelist.cpp listio.cpp oldheap.cpp oldlist.cpp structures.cpp tessarray.cpp)

set(NO_INST_HEADERS bitvec.h callcpp.h const.h cutil.h cutil_class.h danerror.h efio.h
					emalloc.h freelist.h globals.h listio.h oldheap.h oldlist.h structures.h tessarray.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil ${CMAKE_CURRENT_SOURCE_DIR}/../viewer)
add_library(cutil STATIC ${SOURCES} ${NO_INST_HEADERS})
