#!/bin/bash

PROJECT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )/"
BUILD_DIR="$PROJECT_DIR/Builds/linux"

if [ ! -d "$BUILD_DIR" ]; then
	mkdir -p "$BUILD_DIR"
fi

pushd "$BUILD_DIR" > /dev/null
cmake $PROJECT_DIR -G"Unix Makefiles" -DGEN_COCOS_PREBUILT=OFF -DUSE_COCOS_PREBUILT=ON -DCMAKE_BUILD_TYPE=Debug
make
popd > /dev/null