## basic workflow

![workflow](https://i.ibb.co/rmKQY1t/9-Hjk-F96-Ry-D.png)

## project layout

1. ✅ 两种方式, 主要区别是 include 和 test 是不是和模块 src 在一个文件夹
   - 分离：[参考 grpc](https://github.com/grpc/grpc)
   - 一起：[参考 opencv](https://github.com/opencv/opencv)

## build system generator

1. ✅ cmake
2. ✅ 编译选项`-Wall -Wextra -Werror`

## package management

1. ✅ [pixi](https://github.com/prefix-dev/pixi)
2. ✅ cfonts 使得 task log 更清楚

## commit guidelines

1. [Angular 约定](https://github.com/angular/angular/blob/22b96b9/CONTRIBUTING.md#-commit-message-guidelines)

## MR guidelines

1. [first-contributions](https://github.com/firstcontributions/first-contributions)

## code review

## SCA(Static Code Analysis)

1. ✅ 代码格式检查 [run-clang-format](https://github.com/Sarcasm/run-clang-format/tree/master)
2. ✅ 检查代码是否符合 google 编码规范 [cpplint](https://github.com/cpplint/cpplint)
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
2. 尽量每一行代码都有测试

## profiling

1. ✅ perf 指标
2. ✅ [火焰图](https://github.com/brendangregg/FlameGraph)
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

1. 集成各部分
1. 🔲 release 到 github

## reference

1. [golang-standards/project-layout](https://github.com/golang-standards/project-layout)

## TODO

1. ✅ 画流程图 [excalidraw](https://excalidraw.com/#json=AC7W9fuO9aIAoZnm8jnxn,bhJRV8CafC8Zq6KXValjEA)
2. 🔲 贴示意图
