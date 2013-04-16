
set(SOURCES image.cpp imgs.cpp imgtiff.cpp svshowim.cpp)

set(NO_INST_HEADERS image.h img.h imgerrs.h imgs.h imgtiff.h imgunpk.h svshowim.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil ${CMAKE_CURRENT_SOURCE_DIR}/../viewer)
add_library(image STATIC ${SOURCES} ${NO_INST_HEADERS})
