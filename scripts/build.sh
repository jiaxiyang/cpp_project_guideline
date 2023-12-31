#!/bin/bash

BUILD_TYPE=Release
BUILD_DIR=build
INSTALL_DIR=${BUILD_DIR}/$(basename "$PWD")_$(echo ${BUILD_TYPE} | tr '[:upper:]' '[:lower:]')
TARGET_NAME=
BUILD_SYSTEM=Ninja
if ! [ -x "$(command -v ninja)" ]; then
	BUILD_SYSTEM='Unix Makefiles'
fi

rm -rf ${BUILD_DIR}

cmake -G "${BUILD_SYSTEM}" -S . -B ${BUILD_DIR} \
	-DCMAKE_BUILD_TYPE=${BUILD_TYPE} \
	-DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
	-DCMAKE_VERBOSE_MAKEFILE=ON \
	"$@"

cmake --build ${BUILD_DIR}
# ctest -VV --test-dir ${BUILD_DIR}
./${BUILD_DIR}/samples/base
