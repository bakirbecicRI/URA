#include <algorithm>
#include <iostream>
#include <vector>

template <typename It>
void merge(It bg1, It end1, It bg2, It end2, It dest) {
  while (bg1 != end1 || bg2 != end2) {
    if (bg1 == end1)
      *dest++ = *bg2++;
    else if (bg2 == end2)
      *dest++ = *bg1++;
    else if (*bg1 <= *bg2)
      *dest++ = *bg1++;
    else
      *dest++ = *bg2++;
  }
}

template <typename It>
void print(It begin, It end) {
  while (begin != end)
    std::cout << *begin++ << " ";
  std::cout << std::endl;
}

template <typename It>
void mergesort(It begin, It end) {
  print(begin, end);
  if (end - begin <= 1)
    return;
  It middle = begin + (end - begin) / 2;
  // [begin, middle)
  mergesort(begin, middle);
  // [middle, end)
  mergesort(middle, end);

  std::vector<typename It::value_type> temp;
  temp.resize(end - begin);

  merge(begin, middle, middle, end, temp.begin());
  print(temp.begin(), temp.end());
  std::move(temp.begin(), temp.end(), begin);
  return;
}
