#include "merge_sort.hpp"

#include <algorithm>
#include <chrono>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> v;
  for (int i = 0; i < 20; i++) {
    v.push_back(i);
  }
  std::random_shuffle(v.begin(), v.end());

  for (int i = 0; i < 20; i++) {
    std::cout << v[i] << ", ";
  }
  std::cout << std::endl;

  mergesort(v.begin(), v.end());

  for (int i = 0; i < 20; i++) {
    std::cout << v[i] << ", ";
  }
  std::cout << std::endl;
}


