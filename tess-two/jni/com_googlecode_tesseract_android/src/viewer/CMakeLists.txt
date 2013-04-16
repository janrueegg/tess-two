
set(SOURCES scrollview.cpp svmnode.cpp svutil.cpp svpaint.cpp)

set(HEADERS )

set(NO_INST_HEADERS scrollview.h svmnode.h svutil.h)

add_library(cutil STATIC ${SOURCES} ${HEADERS} ${NO_INST_HEADERS})
