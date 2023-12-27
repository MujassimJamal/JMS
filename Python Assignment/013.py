def fabTriangle(num: int) -> None:
    for i in range(num):
        lptr = 1
        rptr = 0
        t = 0
        for j in range(i+1):
            t = lptr + rptr;
            print(t, end="   ")
            lptr = rptr;
            rptr = t;
        print(end="\n")
        
num = int(input("Enter a range: "))
fabTriangle(num)