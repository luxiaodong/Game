mkdir build_ios_sim && cd build_ios_sim
cmake -DCMAKE_TOOLCHAIN_FILE=../cmake/ios.toolchain.cmake -DPLATFORM=SIMULATOR64 -GXcode ../
cd ..
cmake --build build_ios_sim --config Release
mkdir -p plugin_lua53/Plugins/iOSSimulator/
cp build_ios_sim/Release-iphonesimulator/libxlua.a plugin_lua53/Plugins/iOSSimulator/libxlua.a

