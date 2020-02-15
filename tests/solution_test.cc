#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(K_MaxShould, K_MaxReturn) {
  Solution solution;
  std::vector <int> input = {5, 9, 3, 1, 7};
  int actual = solution.K_MaxElement(input, 1);
  int expected = 7;
  EXPECT_EQ(expected, actual);
}

TEST(HeapSortShould_1, HeapSortReturn_1) {
  Solution solution;
  std::vector <int> input = {5, 9, 3, 1, 7};
  int actual = solution.K_MaxElement(input, 10);
  int expected = INT32_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(HeapSortShould_2, HeapSortReturn_2) {
  Solution solution;
  std::vector <int> input = {};
  int actual = solution.K_MaxElement(input, 10);
  int expected = INT32_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(HeapSortShould_3, HeapSortReturn_3) {
  Solution solution;
  std::vector <int> input = {5, 9, 3, 1, 7};
  int actual = solution.K_MaxElement(input, -1);
  int expected = INT32_MIN;
  EXPECT_EQ(expected, actual);
}