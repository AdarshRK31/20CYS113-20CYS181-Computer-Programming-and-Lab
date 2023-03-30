# programme to display thae addition table
# decalred variables
sum = 0
# loop is used to initialize values
# firstno takes values from 1 to 10
for firstno in range(1, 10 + 1, 1):
    print("Addition table of" + str(firstno))
    # secondno takes values from 1 to 10
    for secondno in range(1, 10 + 1, 1):
        sum = firstno + secondno
        print(str(firstno) + "+" + str(secondno) + "=" + str(sum))
