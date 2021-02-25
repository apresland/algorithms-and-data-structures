import pytest
from algorithms import Algorithms

def test_bubble_sort():
    input = [7,2,8,9,0,3,5,1,4,6]
    result = Algorithms.bubble_sort(input)
    assert(result == [0,1,2,3,4,5,6,7,8,9])
