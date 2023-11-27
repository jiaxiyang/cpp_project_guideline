// Copyright (c) xiyang.jia
// Licensed under the MIT license.
#include <glog/logging.h>
#include <pthread.h>
#include <unistd.h>

#include <chrono>  // NOLINT [build/c++11]
#include <iostream>
#include <random>
#include <thread>  // NOLINT [build/c++11]

#include "./add.hpp"

using Clock = std::chrono::steady_clock;

#define __TIC__(tag) auto __##tag##_start_time = Clock::now();

#define __TOC__(tag)                                                  \
  auto __##tag##_end_time = Clock::now();                             \
  LOG(INFO) << #tag << " : "                                          \
            << std::chrono::duration_cast<std::chrono::microseconds>( \
                   __##tag##_end_time - __##tag##_start_time)         \
                   .count()                                           \
            << "us";

int Global;
void *thread1(void *x) {
  Global = 42;
  return x;
}

int threadTest() {
  pthread_t t;
  pthread_create(&t, nullptr, thread1, nullptr);
  Global = 43;
  pthread_join(t, nullptr);
  return Global;
}

static float generateRandomFloat(float min, float max) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dist(min, max);
  return dist(gen);
}

int main() {
  int a = 1;
  // int *b = new int();  // for memory check
  // *b = 1;

  std::cout << "a:" << a << std::endl;
  int sum = 0;

  for (auto i = 1u; i < 100000; ++i) {
    sum += add(generateRandomFloat(1000.0, 10000.0),
               generateRandomFloat(1000.0, 10000.0));
    // std::cout << j << std::endl;
  }
  std::cout << sum << std::endl;

  __TIC__(SLEEP)
  sleep(1);
  __TOC__(SLEEP)

  // threadTest();  // for data race check

  return 0;
}
