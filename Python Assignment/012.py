def generateTriangle(num: int) -> None:
    
    n: int = 1;
    j: int = 1;
    for i in range(num):
        for s in range(num - i, 0, -1):
            print(" ", end="")
        
        for c in range(((i+j)//2)+1):
            print(n, end="")
            n += 1
        
        n -= 2
        
        for c in range((i+j)//2):
            print(n, end="")
            n -= 1
            
        print(end="\n")
        n = 1;
        j += 1


num = int(input("Enter a range: "))
generateTriangle(num)