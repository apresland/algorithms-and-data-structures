
class Algorithms(object):

    def bubble_sort(input):
        if len(input) <= 1:
            return input
        for end in range(len(input)-1,-1, -1):
            for idx in range(0,end):
                if (input[idx+1]) < input[idx]:
                    tmp = input[idx]
                    input[idx] = input[idx+1]
                    input[idx+1] = tmp
        return input




