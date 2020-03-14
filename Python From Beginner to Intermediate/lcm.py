import math

print("Calculate least common multiple (LCM) of two numbers\n")

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

print("LCM: " + str((x*y) / math.gcd(x,y)))
input("\nPress enter to continue")
