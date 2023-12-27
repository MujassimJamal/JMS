from functools import reduce

def sumOfDigits(num: int) -> int:
    return reduce(lambda x, y: int(x) + int(y), list(str(num)))

num = int(input("Enter a num: "))
print("Sum: ",  sumOfDigits(num))