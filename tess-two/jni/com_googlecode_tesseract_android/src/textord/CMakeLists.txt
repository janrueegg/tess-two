
set(SOURCES alignedblob.cpp bbgrid.cpp blkocc.cpp blobgrid.cpp ccnontextdetect.cpp cjkpitch.cpp colfind.cpp colpartition.cpp colpartitionset.cpp
			colpartitiongrid.cpp devanagari_processing.cpp drawedg.cpp drawtord.cpp edgblob.cpp edgloop.cpp equationdetectbase.cpp
			fpchop.cpp gap_map.cpp imagefind.cpp linefind.cpp makerow.cpp oldbasel.cpp pithsync.cpp pitsync1.cpp scanedg.cpp sortflts.cpp
			strokewidth.cpp tabfind.cpp tablefind.cpp tabvector.cpp tablerecog.cpp textlineprojection.cpp textord.cpp
			topitch.cpp tordmain.cpp tospace.cpp tovars.cpp underlin.cpp wordseg.cpp workingpartset.cpp)

set(NO_INST_HEADERS alignedblob.h bbgrid.h blkocc.h blobgrid.h ccnontextdetect.h cjkpitch.h colfind.h colpartition.h colpartitionset.h
					colpartitiongrid.h devanagari_processing.h drawedg.h drawtord.h edgblob.h edgloop.h equationdetectbase.h
					fpchop.h gap_map.h imagefind.h linefind.h makerow.h oldbasel.h pithsync.h pitsync1.h scanedg.h sortflts.h strokewidth.h
					tabfind.h tablefind.h tabvector.h tablerecog.h textlineprojection.h textord.h topitch.h tordmain.h tovars.h
					underlin.h wordseg.h workingpartset.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil 
					${CMAKE_CURRENT_SOURCE_DIR}/../viewer
					${CMAKE_CURRENT_SOURCE_DIR}/../image
					${CMAKE_CURRENT_SOURCE_DIR}/../cutil
					${CMAKE_CURRENT_SOURCE_DIR}/../ccstruct
					${CMAKE_CURRENT_SOURCE_DIR}/../dict)
add_library(textord STATIC ${SOURCES} ${NO_INST_HEADERS})
