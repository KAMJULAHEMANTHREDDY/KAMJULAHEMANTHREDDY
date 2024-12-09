# Function to calculate power
def power(base, exponent):
    return base ** exponent

# Take input from the user
try:
    base = float(input("Enter the base: "))
    exponent = int(input("Enter the exponent: "))
    result = power(base, exponent)
    print(f"{base} raised to the power of {exponent} is {result}.")
except ValueError:
    print("Invalid input! Please enter numeric values.")
