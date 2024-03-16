# Function to convert decimal to binary number

def binaryconversion(n):
   if n > 1:
       binaryconversion(n//2)
   print(n % 2,end = '')

number=int(input("Enter Number: "))
binaryconversion(number)
print()
