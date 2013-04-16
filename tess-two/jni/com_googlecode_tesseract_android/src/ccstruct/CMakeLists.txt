
set(SOURCES blobbox.cpp blobs.cpp blread.cpp boxread.cpp boxword.cpp ccstruct.cpp coutln.cpp
			detlinefit.cpp dppoint.cpp fontinfo.cpp genblob.cpp linlsq.cpp matrix.cpp mod128.cpp normalis.cpp
			ocrblock.cpp ocrpara.cpp ocrrow.cpp otsuthr.cpp pageres.cpp pdblock.cpp points.cpp polyaprx.cpp
			polyblk.cpp publictypes.cpp quadlsq.cpp quadratc.cpp quspline.cpp ratngs.cpp rect.cpp rejctmap.cpp
			seam.cpp split.cpp statistc.cpp stepblob.cpp vecfuncs.cpp werd.cpp)

set(HEADERS publictypes.h)

set(NO_INST_HEADERS blckerr.h blobbox.h blobs.h blread.h boxread.h boxword.h ccstruct.h coutln.h crakedge.h 
					detlinefit.h dppoint.h fontinfo.h genblob.h hpddef.h hpdsizes.h ipoints.h
					linlsq.h matrix.h mod128.h normalis.h ocrblock.h ocrpara.h ocrrow.h otsuthr.h
					pageres.h params_training_featdef.h pdblock.h points.h polyaprx.h polyblk.h
					quadlsq.h quadratc.h quspline.h ratngs.h rect.h rejctmap.h seam.h split.h
					statistc.h stepblob.h vecfuncs.h werd.h)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ccutil 
					${CMAKE_CURRENT_SOURCE_DIR}/../viewer
					${CMAKE_CURRENT_SOURCE_DIR}/../image
					${CMAKE_CURRENT_SOURCE_DIR}/../cutil)
add_library(ccstruct STATIC ${SOURCES} ${HEADERS} ${NO_INST_HEADERS})
