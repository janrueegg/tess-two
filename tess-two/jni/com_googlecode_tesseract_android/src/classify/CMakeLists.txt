
set(SOURCES adaptive.cpp adaptmatch.cpp blobclass.cpp chartoname.cpp classify.cpp cluster.cpp clusttool.cpp cutoffs.cpp
			errorcounter.cpp extract.cpp featdefs.cpp flexfx.cpp float2int.cpp fpoint.cpp fxdefs.cpp
			intfeaturedist.cpp intfeaturemap.cpp intfeaturespace.cpp intfx.cpp intmatcher.cpp intproto.cpp kdtree.cpp
			mastertrainer.cpp mf.cpp mfdefs.cpp mfoutline.cpp mfx.cpp normfeat.cpp normmatch.cpp
			ocrfeatures.cpp outfeat.cpp picofeat.cpp protos.cpp sampleiterator.cpp shapetable.cpp speckle.cpp
			tessclassifier.cpp trainingsample.cpp trainingsampleset.cpp xform2d.cpp)

set(NO_INST_HEADERS adaptive.h baseline.h blobclass.h chartoname.h classify.h cluster.h clusttool.h cutoffs.h
					errorcounter.h extern.h extract.h featdefs.h flexfx.h float2int.h fpoint.h fxdefs.h
					intfeaturedist.h intfeaturemap.h intfeaturespace.h intfx.h intmatcher.h intproto.h kdtree.h
					mastertrainer.h mf.h mfdefs.h mfoutline.h mfx.h normfeat.h normmatch.h
					ocrfeatures.h outfeat.h picofeat.h protos.h sampleiterator.h shapeclassifier.h shapetable.h
					speckle.h tessclassifier.h trainingsample.h trainingsampleset.h xform2d.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil 
					${CMAKE_CURRENT_SOURCE_DIR}/../viewer
					${CMAKE_CURRENT_SOURCE_DIR}/../image
					${CMAKE_CURRENT_SOURCE_DIR}/../cutil
					${CMAKE_CURRENT_SOURCE_DIR}/../ccstruct
					${CMAKE_CURRENT_SOURCE_DIR}/../dict
					${CMAKE_SOURCE_DIR}/vs2008/port)
add_library(classify STATIC ${SOURCES} ${NO_INST_HEADERS})
