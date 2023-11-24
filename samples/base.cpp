// Copyright (c) xiyang.jia
// Licensed under the MIT license.

#include <glog/logging.h>
#include <unistd.h>

#include <chrono>  // NOLINT [build/c++11]
#include <iostream>

using Clock = std::chrono::steady_clock;

#define __TIC__(tag) auto __##tag##_start_time = Clock::now();

#define __TOC__(tag)                                                  \
  auto __##tag##_end_time = Clock::now();                             \
  LOG(INFO) << #tag << " : "                                          \
            << std::chrono::duration_cast<std::chrono::microseconds>( \
                   __##tag##_end_time - __##tag##_start_time)         \
                   .count()                                           \
            << "us";

int main() {
  int a = 1;
  std::cout << "a:" << a;

  __TIC__(SLEEP)
  sleep(1);
  __TOC__(SLEEP)
  return 0;
}
