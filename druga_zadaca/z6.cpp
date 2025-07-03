#pragma once

#include <iterator>
#include <algorithm>

template <typename It>
void insertionsort(It begin, It end) {
    for (It i = begin + 1; i < end; ++i) {
        auto key = *i;
        It j = i;
        while (j > begin && *(j - 1) > key) {
            *j = *(j - 1);
            --j;
        }
        *j = key;
    }
}

template <typename It>
void quicksort(It begin, It end) {
    if (std::distance(begin, end) <= 16) {
        insertionsort(begin, end);
        return;
    }

    auto pivot = *(begin + std::distance(begin, end) / 2);
    It left = begin;
    It right = end - 1;

    while (left <= right) {
        while (*left < pivot) ++left;
        while (*right > pivot) --right;
        if (left <= right) {
            std::iter_swap(left, right);
            ++left;
            --right;
        }
    }

    if (begin < right)
        quicksort(begin, right + 1);
    if (left < end)
        quicksort(left, end);
}
