# with recursion
def fabRecurse(num: int, lptr: int, rptr: int, t: int) -> None:
    t = lptr + rptr
    print(t, end=" ")
    lptr = rptr
    rptr = t

    if ((num:=num-1) > 0):
        fabRecurse(num, lptr, rptr, t)

def fabIter(num: int, lptr: int, rptr: int, t: int) -> None:
    for i in range(num):
        t = lptr + rptr;
        print(t, end=" ")
        lptr = rptr;
        rptr = t;

num = int(input("Enter a num: "))
fabRecurse(num, -1, 1, 0)
print(end="\n\n")
fabIter(num, -1, 1, 0)