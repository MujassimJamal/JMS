from typing import Union

arrType = Union[list[int], list[float]]

def numIndex(numArr: arrType) -> tuple:
    largeNumIdx: int = 0
    largeNum: int = numArr[0]
    for i in range(len(numArr)):
        if numArr[i]>largeNum:
            largeNum = numArr[i]
            largeNumIdx = i

    return max(numArr), largeNumIdx

numArr = [10, 224, 45, 0 , -1, 555, 93, 9999]
result = numIndex(numArr)
print("NUM: ", result[0])
print("INDEX: ", result[1])