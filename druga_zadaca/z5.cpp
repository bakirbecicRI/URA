#pragma once
#include <iterator>

template <typename It>
void inplace_merge(It begin, It mid, It end) {
    while (begin < mid && mid < end) {
        if (*begin <= *mid) {
            ++begin;
        } else {
            auto value = *mid;
            auto it = mid;
            while (it != begin) {
                *it = *(std::prev(it));
                --it;
            }
            *begin = value;

            ++mid;
            ++begin;
        }
    }
}

template <typename It>
void mergesort(It begin, It end) {
    if (std::distance(begin, end) <= 1)
        return;

    It mid = begin + std::distance(begin, end) / 2;
    mergesort(begin, mid);
    mergesort(mid, end);
    inplace_merge(begin, mid, end);
}
