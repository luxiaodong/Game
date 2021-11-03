#!/bin/sh

cd "$( dirname "${BASH_SOURCE[0]}" )"
LIPO="xcrun -sdk iphoneos lipo"
STRIP="xcrun -sdk iphoneos strip"

IXCODE=`xcode-select -print-path`
ISDK=$IXCODE/Platforms/iPhoneSimulator.platform/Developer
ISDKVER=iPhoneSimulator.sdk
ISDKP=$IXCODE/usr/bin/

if [ ! -e $ISDKP/ar ]; then 
  sudo cp /usr/bin/ar $ISDKP
fi

if [ ! -e $ISDKP/ranlib ]; then
  sudo cp /usr/bin/ranlib $ISDKP
fi

if [ ! -e $ISDKP/strip ]; then
  sudo cp /usr/bin/strip $ISDKP
fi

cd luajit-2.1.0b3

XCODEVER=`xcodebuild -version|head -n 1|sed 's/Xcode \([0-9]*\)/\1/g'`

make clean
ISDKF="-arch x86_64 -isysroot $ISDK/SDKs/$ISDKVER -miphoneos-version-min=7.0"
make HOST_CC="gcc -std=c99" TARGET_FLAGS="$ISDKF" TARGET=x86_64 TARGET_SYS=iOS LUAJIT_A=libluajit.a
cd ..

mkdir -p build_lj_ios_sim && cd build_lj_ios_sim
cmake -DUSING_LUAJIT=ON  -DCMAKE_TOOLCHAIN_FILE=../cmake/ios.toolchain.cmake -DPLATFORM=SIMULATOR64  -GXcode ../
cd ..
cmake --build build_lj_ios_sim --config Release

lipo build_lj_ios_sim/Release-iphonesimulator/libxlua.a -thin x86_64 -output build_lj_ios_sim/Release-iphonesimulator/libxlua64.a

mkdir -p plugin_luajit/Plugins/iOSSimulator/
libtool -static -o plugin_luajit/Plugins/iOSSimulator/libxlua.a build_lj_ios_sim/Release-iphonesimulator/libxlua64.a luajit-2.1.0b3/src/libluajit.a
