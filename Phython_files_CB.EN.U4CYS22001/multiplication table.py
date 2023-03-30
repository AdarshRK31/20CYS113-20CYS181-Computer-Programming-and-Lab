# programme to display multiplication table
# declared varibales
mul = 0
# loop used to initialize the values
for firstno in range(1, 10 + 1, 1):
    print("Addition table of" + str(firstno))
    for secondno in range(1, 10 + 1, 1):
        mul = firstno * secondno
        print(str(firstno) + "*" + str(secondno) + "=" + str(mul))
