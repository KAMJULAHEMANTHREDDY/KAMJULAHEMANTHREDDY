# Recursive function to calculate factorial
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)
# Take input from the user
num = int(input("Enter an integer: "))
print(f"The factorial of {num} is {factorial(num)}.")
