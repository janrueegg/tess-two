
set(SOURCES adaptions.cpp applybox.cpp control.cpp cube_control.cpp cube_reco_context.cpp cubeclassifier.cpp
			docqual.cpp equationdetect.cpp fixspace.cpp fixxht.cpp imgscale.cpp ltrresultiterator.cpp
			osdetect.cpp output.cpp pageiterator.cpp pagesegmain.cpp pagewalk.cpp paragraphs.cpp paramsd.cpp
			pgedit.cpp recogtraining.cpp reject.cpp resultiterator.cpp scaleimg.cpp tesseract_cube_combiner.cpp
			tessbox.cpp tessedit.cpp tesseractclass.cpp tessvars.cpp tfacepp.cpp thresholder.cpp werdit.cpp)

set(HEADERS thresholder.h ltrresultiterator.h pageiterator.h resultiterator.h)

set(NO_INST_HEADERS control.h cube_reco_context.h cubeclassifier.h docqual.h equationdetect.h fixspace.h
					imgscale.h mutableiterator.h osdetect.h output.h paragraphs.h paragraphs_internal.h
					paramsd.h pgedit.h reject.h scaleimg.h tessbox.h tessedit.h tesseractclass.h
					tesseract_cube_combiner.h tessvars.h tfacep.h tfacepp.h werdit.h)

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
add_library(ccmain STATIC ${SOURCES} ${HEADERS} ${NO_INST_HEADERS})
