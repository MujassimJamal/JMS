def numToChar(num: int) -> None:
    numToCharMap = {
        0: "Zero",
        1: "One",
        2: "Two",
        3: "Three",
        4: "Four",
        5: "Five",
        6: "Six",
        7: "Seven",
        8: "Eight",
        9: "Nine"
    }
    
    numList: str = list(str(num))
    for n in numList:
        print(numToCharMap[int(n)], end=" ")
    

num = int(input("Enter a num: "))
numToChar(num)