def swap(a: int, b: int) -> tuple:
    a = a + b
    b = a - b
    a = a -b;
    
    return (a, b)

a = -10
b = -7
print("a = ", a, ", b = ", b)
a, b = swap(a, b)
print("a = ", a, ", b = ", b)
    
    