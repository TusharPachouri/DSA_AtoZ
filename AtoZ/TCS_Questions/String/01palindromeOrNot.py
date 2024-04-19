str = str(input("Enter a string: "))
for i in range(0, len(str)/2):
    if str[i] != str[len(str)-i-1]:
        print("Not a palindrome")
        break
else:
    print("Palindrome")