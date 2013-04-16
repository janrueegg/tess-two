
set(SOURCES input_file_buffer.cpp neural_net.cpp neuron.cpp sigmoid_table.cpp)

set(NO_INST_HEADERS input_file_buffer.h neural_net.h neuron.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil 
					${CMAKE_CURRENT_SOURCE_DIR}/../viewer
					${CMAKE_CURRENT_SOURCE_DIR}/../image
					${CMAKE_CURRENT_SOURCE_DIR}/../cutil
					${CMAKE_CURRENT_SOURCE_DIR}/../ccstruct
					${CMAKE_CURRENT_SOURCE_DIR}/../dict)
add_library(neural STATIC ${SOURCES} ${NO_INST_HEADERS})
