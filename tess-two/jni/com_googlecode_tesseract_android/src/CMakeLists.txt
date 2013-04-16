cmake_minimum_required(VERSION 2.8)

set(CMAKE_BUILD_TYPE Release)

#INCLUDE(CheckIncludeFiles)
#CHECK_INCLUDE_FILES(dlfcn.h HAVE_DLFCN_H)
#CHECK_INCLUDE_FILES(inttypes.h HAVE_INTTYPES_H)
#CHECK_INCLUDE_FILES(memory.h HAVE_MEMORY_H)
#CHECK_INCLUDE_FILES(stdint.h HAVE_STDINT_H)
#CHECK_INCLUDE_FILES(stdlib.h HAVE_STDLIB_H)
#CHECK_INCLUDE_FILES(strings.h HAVE_STRINGS_H)
#CHECK_INCLUDE_FILES(string.h HAVE_STRING_H)
#CHECK_INCLUDE_FILES(sys/stat.h HAVE_SYS_STAT_H)
#CHECK_INCLUDE_FILES(sys/types.h HAVE_SYS_TYPES_H)
#CHECK_INCLUDE_FILES(unistd.h HAVE_UNISTD_H)


#CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/config/config.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/config_auto.h)
#add_definitions(-DHAVE_CONFIG_H)

# Leptonica (assuming the default install directory for now)
include_directories(${CMAKE_SOURCE_DIR}/../../com_googlecode_leptonica_android/src/build/install/include/leptonica)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

add_subdirectory(ccutil)
add_subdirectory(viewer)
add_subdirectory(cutil)
add_subdirectory(image)
add_subdirectory(ccstruct)
add_subdirectory(dict)
add_subdirectory(classify)
add_subdirectory(wordrec)
add_subdirectory(neural_networks/runtime)
add_subdirectory(textord)
add_subdirectory(cube)
#add_subdirectory(ccmain)
#add_subdirectory(api)
# . training java doc testing)
