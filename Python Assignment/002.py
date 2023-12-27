def isPrime(num: int) -> bool:
    for i in range(2, num):
        if num % i == 0:
            return False

    return True

num = int(input("Enter a num: "))
print("prime number") if isPrime(num) else print("not prime number")