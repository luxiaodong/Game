#!/bin/sh

if [ -z "$ANDROID_NDK" ]; then
    export ANDROID_NDK=~/android-ndk-r15c
fi

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
SRCDIR=$DIR/luajit-2.1.0b3
# ANDROID_NDK=~/android-ndk-r10e

OS=`uname -s`
PREBUILT_PLATFORM=linux-x86_64
if [[ "$OS" == "Darwin" ]]; then
    PREBUILT_PLATFORM=darwin-x86_64
fi


# =======i386 architecture deprecated in MacOS========
# =======i386 architecture deprecated in MacOS========
# =======i386 architecture deprecated in MacOS========

# NDKABI=16

# echo "Building armv7 lib"
# NDKDIR=$ANDROID_NDK
# NDKBIN=$NDKDIR/toolchains/llvm/prebuilt/$PREBUILT_PLATFORM/bin
# NDKCROSS=$NDKBIN/arm-linux-androideabi-
# NDKCC=$NDKBIN/armv7a-linux-androideabi16-clang
# cd "$SRCDIR"
# make clean
# make HOST_CC="gcc -m32" CROSS=$NDKCROSS \
#      STATIC_CC=$NDKCC DYNAMIC_CC="$NDKCC -fPIC" \
#      TARGET_LD=$NDKCC

# cd "$DIR"
# mkdir -p build_lj_v7a && cd build_lj_v7a
# cmake -DUSING_LUAJIT=ON -DANDROID_ABI=armeabi-v7a -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK/build/cmake/android.toolchain.cmake -DANDROID_TOOLCHAIN_NAME=arm-linux-androideabi-clang -DANDROID_NATIVE_API_LEVEL=android-9 ../
# cd "$DIR"
# cmake --build build_lj_v7a --config Release
# mkdir -p plugin_luajit/Plugins/Android/libs/armeabi-v7a/
# cp build_lj_v7a/libxlua.so plugin_luajit/Plugins/Android/libs/armeabi-v7a/libxlua.so


NDKABI=21
NDKDIR=$ANDROID_NDK
NDKBIN=$NDKDIR/toolchains/llvm/prebuilt/$PREBUILT_PLATFORM/bin
NDKCROSS=$NDKBIN/aarch64-linux-android-
NDKCC=$NDKBIN/aarch64-linux-android$NDKABI-clang
cd "$SRCDIR"
make clean
make CROSS=$NDKCROSS TARGET_SYS=Linux STATIC_CC=$NDKCC DYNAMIC_CC="$NDKCC -fPIC" TARGET_LD=$NDKCC

cd "$DIR"
mkdir -p build_lj_v8a && cd build_lj_v8a
cmake -DUSING_LUAJIT=ON -DANDROID_ABI=arm64-v8a -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK/build/cmake/android.toolchain.cmake -DANDROID_TOOLCHAIN_NAME=arm-linux-androideabi-clang -DANDROID_NATIVE_API_LEVEL=android-9 ../
cd "$DIR"
cmake --build build_lj_v8a --config Release
mkdir -p plugin_luajit/Plugins/Android/libs/arm64-v8a/
cp build_lj_v8a/libxlua.so plugin_luajit/Plugins/Android/libs/arm64-v8a/libxlua.so
