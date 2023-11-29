## basic workflow

![workflow](https://i.ibb.co/rmKQY1t/9-Hjk-F96-Ry-D.png)

## project layout

1. ✅ The main difference between the two methods is whether include and test are in the same folder as the module src.
   - separate：[grpc](https://github.com/grpc/grpc)
   - together：[opencv](https://github.com/opencv/opencv)

## build system generator

1. ✅ cmake
2. ✅ using compile options `-Wall -Wextra -Werror`

## package management

1. ✅ [pixi](https://github.com/prefix-dev/pixi)
2. ✅ cfonts make task log more readble

## commit guidelines

1. [Angular gudelines](https://github.com/angular/angular/blob/22b96b9/CONTRIBUTING.md#-commit-message-guidelines)

## MR guidelines

1. [first-contributions](https://github.com/firstcontributions/first-contributions)

## code review

## SCA(Static Code Analysis)

1. ✅ code format check [run-clang-format](https://github.com/Sarcasm/run-clang-format/tree/master)
2. ✅ [cpplint](https://github.com/cpplint/cpplint)
3. ✅ [clang-tidy](https://clang.llvm.org/extra/clang-tidy/)

## DCA(Dynamic Code Analysis)

1. ✅ asan
   - memcheck
   - thread
2. ✅ valgrind

## unit test

1. ✅ gtest

## coverage test

1. ✅ [gcovr](https://github.com/gcovr/gcovr)

## profiling

1. ✅ perf stat
2. ✅ [flamegraph](https://github.com/brendangregg/FlameGraph)
3. ✅ [gprof2dot](https://github.com/jrfonseca/gprof2dot)

## doc

1. ✅ [doxygen](https://www.doxygen.nl/)

## changelog

1. [changlog](https://keepachangelog.com/zh-CN/1.0.0/)
2. [tensorrt release notes](https://docs.nvidia.com/deeplearning/tensorrt/release-notes/index.html)
3. [rerun](https://github.com/rerun-io/rerun/releases)
4. [mmsegmentation](https://github.com/open-mmlab/mmsegmentation/blob/master/docs/en/changelog.md)
5. [glog](https://github.com/google/glog/blob/master/ChangeLog)

## CI/CD

1. Integrate parts
1. 🔲 release artifacts to github

## reference

1. [golang-standards/project-layout](https://github.com/golang-standards/project-layout)

## TODO

1. ✅ Draw flow chart [excalidraw](https://excalidraw.com/#json=AC7W9fuO9aIAoZnm8jnxn,bhJRV8CafC8Zq6KXValjEA)
2. 🔲 Post diagram
