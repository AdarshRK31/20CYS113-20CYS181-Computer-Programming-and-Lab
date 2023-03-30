def fibonacci(n):
    k = 1
    i = 1
    if n == 0:
        pass
    else:
        a = 0
        j = 1
        while i <= n:
            k = a + j
            print(str(a) + "+" + str(j) + "=" + str(k))
            a = j
            j = k
            i = i + 1
    
    return a

# Main
print("Enter the number")
n = int(input())
print("Fibonacci series is")
fibo = fibonacci(n)
