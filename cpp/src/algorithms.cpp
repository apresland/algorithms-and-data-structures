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
            std::cout << *i << "," << *(i+1) << std::endl;
            if(*i > *(i+1)) {
                //int tmpVal = *i;
                //*i = *(i+1);
                //*(i+1) = tmpVal;
                std::swap(*(i+1),*i);
            }
        }
    }
}