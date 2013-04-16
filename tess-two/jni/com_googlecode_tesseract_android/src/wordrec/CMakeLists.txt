
set(SOURCES associate.cpp bestfirst.cpp chop.cpp chopper.cpp closed.cpp drawfx.cpp findseam.cpp gradechop.cpp
			heuristic.cpp language_model.cpp makechop.cpp matchtab.cpp olutil.cpp outlines.cpp pieces.cpp
			plotedges.cpp plotseg.cpp render.cpp segsearch.cpp tface.cpp wordclass.cpp wordrec.cpp)

set(NO_INST_HEADERS associate.h bestfirst.h chop.h chopper.h closed.h drawfx.h findseam.h gradechop.h
					language_model.h makechop.h matchtab.h measure.h olutil.h outlines.h plotedges.h
					plotseg.h render.h wordclass.h wordrec.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil 
					${CMAKE_CURRENT_SOURCE_DIR}/../viewer
					${CMAKE_CURRENT_SOURCE_DIR}/../image
					${CMAKE_CURRENT_SOURCE_DIR}/../cutil
					${CMAKE_CURRENT_SOURCE_DIR}/../ccstruct
					${CMAKE_CURRENT_SOURCE_DIR}/../dict
					${CMAKE_CURRENT_SOURCE_DIR}/../classify)
add_library(wordrec STATIC ${SOURCES} ${NO_INST_HEADERS})
