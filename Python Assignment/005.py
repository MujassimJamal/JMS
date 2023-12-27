from functools import reduce

def isArmstrong(num: int) -> bool:
    numLen: str = len(str(num))
    numArr: list[int] = list(str(num))
    
    numSum: int = 0
    for n in numArr:
        numSum += int(n)**numLen
        
    return numSum == num
    

num = int(input("Enter a num: "))
print("armstrong number") if isArmstrong(num) else print("not armstrong number")