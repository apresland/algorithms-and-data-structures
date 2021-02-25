
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

    def merge(self, left, right):
        output = []
        while len(left) > 0 and len(right) > 0:
            if left[0] <= right[0]:
                output.append(left[0])
                left = left[1:]
            else:
                output.append(right[0])
                right = right[1:]

        while len(left) > 0:
            output.append(left[0])
            left = left[1:]

        while len(right) > 0:
            output.append(right[0])
            right = right[1:]
            
        return output


    def merge_sort(self, input):

        if len(input) <= 1:
            return input

        left = []
        right = []

        for idx in range(0, len(input)):
            if idx < len(input) / 2:
                left.append(input[idx])
            else:
                right.append(input[idx])

        left = self.merge_sort(left)
        right = self.merge_sort(right)

        return self.merge(left, right)





