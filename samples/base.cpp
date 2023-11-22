#include <glog/logging.h>

#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

using namespace std;
using Clock = std::chrono::steady_clock;

#define __TIC__(tag) auto __##tag##_start_time = Clock::now();

#define __TOC__(tag)                                                           \
  auto __##tag##_end_time = Clock::now();                                      \
  LOG(INFO) << #tag << " : "                                                   \
            << std::chrono::duration_cast<std::chrono::microseconds>(          \
                   __##tag##_end_time - __##tag##_start_time)                  \
                   .count()                                                    \
            << "us";

int main() {
  __TIC__(SLEEP)
  sleep(1);
  __TOC__(SLEEP)
  return 0;
}
