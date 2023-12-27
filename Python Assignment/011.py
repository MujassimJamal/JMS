def generateTriangle(num: int) -> None:
    
    char: str = 65;
    j: int = 1;
    for i in range(num):
        for s in range(num - i, 0, -1):
            print(" ", end="")
        
        for c in range(((i+j)//2)+1):
            print(chr(char), end="")
            char += 1
        
        char -= 2
        
        for c in range((i+j)//2):
            print(chr(char), end="")
            char -= 1
            
        print(end="\n")
        char = 65;
        j += 1


num = int(input("Enter a number: "))
generateTriangle(num)