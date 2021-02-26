#include <iostream>
#include <vector>
#include <algorithm>

#include "algorithms.h"

void bubble_sort(std::vector<int> &input)
{
    for( int step = input.size()-1; step > -1; --step) { 
        for( int j = 0; j < step ; ++j) {
            if(input.at(j) > input.at(j+1)) {
                int tmpVal = input.at(j);
                input.at(j) = input.at(j+1);
                input.at(j+1) = tmpVal;
            }
        }
    }
}