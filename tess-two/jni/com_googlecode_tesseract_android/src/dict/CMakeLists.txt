
set(SOURCES context.cpp dawg.cpp dict.cpp hyphen.cpp permdawg.cpp permute.cpp states.cpp stopper.cpp trie.cpp)

set(NO_INST_HEADERS dawg.h dict.h matchdefs.h permute.h states.h stopper.h trie.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil 
					${CMAKE_CURRENT_SOURCE_DIR}/../viewer
					${CMAKE_CURRENT_SOURCE_DIR}/../image
					${CMAKE_CURRENT_SOURCE_DIR}/../cutil
					${CMAKE_CURRENT_SOURCE_DIR}/../ccstruct)
add_library(dict STATIC ${SOURCES} ${NO_INST_HEADERS})
