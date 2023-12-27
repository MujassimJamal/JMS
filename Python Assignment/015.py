def genTriangle(num: int) -> None:
    for i in range(num):
        print("* "*(i+1))
        
num = int(input("Enter a num: "))
genTriangle(num)