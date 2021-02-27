#include <iostream>
#include <vector>
#include <algorithm>

#include "algorithms.h"

void bubble_sort(std::vector<int> &input)
{
    std::vector<int>::iterator begin = std::begin(input);
    std::vector<int>::iterator end = std::end(input);
    
    for( auto step = end; step != begin; --step) {
        for( auto i = begin; i != step ; ++i) {
            auto &val0 = *i;
            auto &val1 = *(i+1);
            if(val0 > val1) {
                std::swap(val0, val1);
            }
        }
    }
}

void merge_sort(std::vector<int> &input) {

    if (1 >= input.size()) {
        return;
    }

    std::size_t n = input.size()/2;
    std::vector<int> left(input.cbegin(), input.cbegin() + n);
    std::vector<int> right(input.cbegin() + n, input.cend());

    merge_sort(left);
    merge_sort(right);

    std::vector<int> merged = std::vector<int>();
    while ( left.size() > 0 && right.size() > 0 ) {
        auto &lval = *left.begin();
        auto &rval = *right.begin();
        if (lval <= rval) {
            merged.push_back(lval);
            left.erase(left.begin());
        } else {
            merged.push_back(rval);
            right.erase(right.begin());
        }
    }
    
    if (left.size() > 0) {
        std::move(left.begin(), left.end(), std::back_inserter(merged));
    }

    if (right.size() > 0) {
        std::move(right.begin(), right.end(), std::back_inserter(merged));
    }

    input.assign(merged.begin(), merged.end());
}