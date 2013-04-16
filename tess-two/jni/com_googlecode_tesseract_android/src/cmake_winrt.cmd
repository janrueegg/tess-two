mkdir build
cd build

call "C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\bin\x86_arm\vcvarsx86_arm.bat"

rem cmake.exe -G"NMake Makefiles" -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=..\arm.winrt.toolchain.cmake ..
cmake.exe -GNinja -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=..\arm.winrt.toolchain.cmake ..
