def factorial(number):
    fact = 1
    if number > 0:
        for count in range(1, number + 1, 1):
            fact = fact * count
    else:
        if number == 0:
            pass
        else:
            fact = 0
    
    return fact

# Main
while True:    #This simulates a Do Loop
    print("Enter the no to find factorial of")
    num = int(input())
    fact = factorial(num)
    if fact == 0:
        pass
    else:
        print(" factorial of " + str(num) + " is " + str(fact))
    if not(fact == 0): break   #Exit loop
