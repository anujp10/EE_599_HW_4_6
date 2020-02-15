#include "solution.h"
#include <queue>

int Solution::K_MaxElement(const std::vector<int> &input, const int &k) { 
  int count = 0;

  std::priority_queue <int> inputqueue;
  for (auto &n : input) {
    inputqueue.push(n);
  }

  if (k < 0 || (unsigned int)k >= inputqueue.size() || input.size() == 0) {
    return INT32_MIN; //Check if input vector is empty
  }
  
  while (count < k) {
    inputqueue.pop();
    count++;
  }
  return inputqueue.top();
}

