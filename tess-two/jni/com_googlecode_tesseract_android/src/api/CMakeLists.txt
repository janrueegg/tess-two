
set(SOURCES baseapi.cpp capi.cpp)

set(HEADERS apitypes.h baseapi.h capi.h)

set(NO_INST_HEADERS tesseractmain.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil 
					${CMAKE_CURRENT_SOURCE_DIR}/../viewer
					${CMAKE_CURRENT_SOURCE_DIR}/../image
					${CMAKE_CURRENT_SOURCE_DIR}/../cutil
					${CMAKE_CURRENT_SOURCE_DIR}/../ccstruct
					${CMAKE_CURRENT_SOURCE_DIR}/../ccmain
					${CMAKE_CURRENT_SOURCE_DIR}/../textord
					${CMAKE_CURRENT_SOURCE_DIR}/../neural_networks/runtime
					${CMAKE_CURRENT_SOURCE_DIR}/../dict
					${CMAKE_CURRENT_SOURCE_DIR}/../wordrec
					${CMAKE_CURRENT_SOURCE_DIR}/../classify
					${CMAKE_CURRENT_SOURCE_DIR}/../cube
					${CMAKE_SOURCE_DIR}/vs2008/port)
add_library(tesseract SHARED ${SOURCES} ${HEADERS} ${NO_INST_HEADERS})
target_link_libraries(tesseract ${CMAKE_BINARY_DIR}/ccmain/ccmain.lib
								${CMAKE_BINARY_DIR}/ccstruct/ccstruct.lib
								${CMAKE_BINARY_DIR}/ccutil/ccutil.lib
								${CMAKE_BINARY_DIR}/classify/classify.lib
								${CMAKE_BINARY_DIR}/cube/cube.lib
								${CMAKE_BINARY_DIR}/cutil/cutil.lib
								${CMAKE_BINARY_DIR}/dict/dict.lib
								${CMAKE_BINARY_DIR}/image/image.lib
								${CMAKE_BINARY_DIR}/neural_networks/runtime/neural.lib
								${CMAKE_BINARY_DIR}/textord/textord.lib
								${CMAKE_BINARY_DIR}/viewer/viewer.lib
								${CMAKE_BINARY_DIR}/wordrec/wordrec.lib
								${CMAKE_BINARY_DIR}/vs2008/port/vcport.lib
								${LEPTONICA_ROOT}/lib/lept.lib)
