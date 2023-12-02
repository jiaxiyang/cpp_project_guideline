## overview

This project aims to guide the way beginners make their cpp projects.

## basic workflow

![workflow](https://i.ibb.co/rmKQY1t/9-Hjk-F96-Ry-D.png)

## run this project

```shell
git clone https://github.com/jiaxiyang/cpp_project_guideline.git
cd cpp_project_guideline
pixi run all
```

## project layout

1. ✅ The main difference between the two methods is whether include and test are in the same folder as the module src.
   - separate：[grpc](https://github.com/grpc/grpc)
   - together：[opencv](https://github.com/opencv/opencv)

## build system generator

1. ✅ [cmake](https://cmake.org)
2. ✅ using compile options `-Wall -Wextra -Werror`

## package management

1. ✅ [pixi](https://github.com/prefix-dev/pixi)
2. ✅ make log more readble [cfonts](https://github.com/dominikwilkowski/cfonts)

## commit guidelines

1. [Angular gudelines](https://github.com/angular/angular/blob/22b96b9/CONTRIBUTING.md#-commit-message-guidelines)

## MR guidelines

1. [first-contributions](https://github.com/firstcontributions/first-contributions)

## code review

1. [awesome-code-review](https://github.com/joho/awesome-code-review)

## SCA(Static Code Analysis)

1. ✅ code format check [run-clang-format](https://github.com/Sarcasm/run-clang-format/tree/master)
2. ✅ [cpplint](https://github.com/cpplint/cpplint)
3. ✅ [clang-tidy](https://clang.llvm.org/extra/clang-tidy/)

## DCA(Dynamic Code Analysis)

1. ✅ [asan](https://github.com/google/sanitizers)
   - memcheck
   - thread
2. ✅ [valgrind](https://valgrind.org/)

![valgrind result](https://i.ibb.co/5h5Bh7Q/u98-Co-Md-QSY.png)

## unit test

1. ✅ [gtest](https://github.com/google/googletest)
2. show results on github ci

![unit test result](https://i.ibb.co/FsvywrL/XO3-N0-JH9-T8.png)

## coverage test

1. ✅ [gcovr](https://github.com/gcovr/gcovr)

   ![coverage test result](https://i.ibb.co/YjzcYgk/FFEUy1-HVR2.png)

## profiling

1. ✅ [perf](https://perf.wiki.kernel.org)
2. ✅ [flamegraph](https://github.com/brendangregg/FlameGraph)
3. ✅ [gprof2dot](https://github.com/jrfonseca/gprof2dot)

## doc

1. ✅ [doxygen](https://www.doxygen.nl/)

![docxygen](https://i.ibb.co/0J9pQy9/image.png)

## changelog

1. [changlog](https://keepachangelog.com/zh-CN/1.0.0/)
2. [tensorrt release notes](https://docs.nvidia.com/deeplearning/tensorrt/release-notes/index.html)
3. [rerun](https://github.com/rerun-io/rerun/releases)
4. [mmsegmentation](https://github.com/open-mmlab/mmsegmentation/blob/master/docs/en/changelog.md)
5. [glog](https://github.com/google/glog/blob/master/ChangeLog)

## CI/CD

1. integrate the parts above
1. 🔲 release artifacts to github

## reference

1. [together c & c++ discord](https://discord.gg/tccpp)
1. [better c++ discord](https://discord.gg/JAEgDRbxtq)
1. [golang-standards/project-layout](https://github.com/golang-standards/project-layout)

## TODO

1. ✅ Draw flow chart [excalidraw](https://excalidraw.com/#json=AC7W9fuO9aIAoZnm8jnxn,bhJRV8CafC8Zq6KXValjEA)
2. 🔲 Post diagram
