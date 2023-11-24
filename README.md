## project layout

1. 两种方式, 主要区别是 include 和 test 是不是和模块 src 在一个文件夹
1. 🔲 一起：[参考 opencv](https://github.com/opencv/opencv)
1. 🔲 分离：[参考 grpc](https://github.com/grpc/grpc)

## package management

1. ✅ [pixi](https://github.com/prefix-dev/pixi)
1. ✅ cfonts 使得 task log 更清楚

## commit guidelines

1. [Angular 约定](https://github.com/angular/angular/blob/22b96b9/CONTRIBUTING.md#-commit-message-guidelines)

## MR guidelines

1. [first-contributions](https://github.com/firstcontributions/first-contributions)

## SCA(Static Code Analysis)

1. ✅ [clang-tidy](https://clang.llvm.org/extra/clang-tidy/)

## DCA(Dynamic Code Analysis)

1. 🔲 asan
   - memcheck
   - thread
1. 🔲 valgrind

## unit test

1. 🔲 gtest

## coverage test

1. ✅ [gcovr](https://github.com/gcovr/gcovr)
1. 尽量每一行代码都有测试

## CI/CD

1. ✅ [run-clang-format](https://github.com/Sarcasm/run-clang-format/tree/master)
1. 🔲 [actions/clang-format-check](https://github.com/marketplace/actions/clang-format-check)
1. 🔲 检查代码是否符合 google 编码规范 [cpplint](https://github.com/cpplint/cpplint)
1. 🔲 多平台
1. 🔲 release 到 github
1. 🔲 编译选项`-Wall -Wextra -Werror`
1. 🔲 结果标准显示

## profiling

1. 🔲 perf 指标
1. 🔲 [火焰图](https://github.com/brendangregg/FlameGraph)
1. 🔲 [gprof2dot](https://github.com/jrfonseca/gprof2dot)

## doc

1. 🔲 [doxygen](https://www.doxygen.nl/)
1. html 比 pdf 更容易阅读

## changelog

1. [changlog](https://keepachangelog.com/zh-CN/1.0.0/)
1. [tensorrt release notes](https://docs.nvidia.com/deeplearning/tensorrt/release-notes/index.html)
1. [rerun](https://github.com/rerun-io/rerun/releases)
1. [mmsegmentation](https://github.com/open-mmlab/mmsegmentation/blob/master/docs/en/changelog.md)
1. [glog](https://github.com/google/glog/blob/master/ChangeLog)

## reference

1. [golang-standards/project-layout](https://github.com/golang-standards/project-layout)

## TODO

1. 🔲 画流程图
1. 🔲 project layout 截图
1. 🔲 每一步贴示意图
