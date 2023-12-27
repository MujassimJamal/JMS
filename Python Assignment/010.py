def decToBin(num: int) -> int:
    binary: str = ""
    
    while (num > 1):
        binary = str(num % 2) + binary
        num //= 2
        
    return "1" + binary    
    
num = int(input("Enter a decimal: "))
print("Binary: ", decToBin(num))