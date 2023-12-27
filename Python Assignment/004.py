#python has a recursion limit upto 1000, So i got the error `RecursionError: maximum recursion depth exceeded` as the recursion
#goes beyond 1000 for large number. Hence, i have used setrecursionlimit function to set a larger limit.

import sys
sys.setrecursionlimit(12345)


def fact(num: int, result: int) -> int:
    if (num <= 0):
        return result
    
    return fact(num-1, result*num)

num = int(input("Enter a num: "))
print(fact(num, 1))