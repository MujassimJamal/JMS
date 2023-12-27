def isPalindrome(num: int) -> bool:
    numStr: str = str(num)
    
    return numStr == numStr[::-1]

num = int(input("Enter a number: "))
print("palindrome number") if isPalindrome(num) else print("not palindrome number")