def equalitySolver(a, k):
    tempAnsw = 1
    for i in range(0, k):
        tempAnsw = tempAnsw * (a - i)
    return tempAnsw

def fact(n):
    if n == 1:
        return 1
    else:
        return n * fact(n - 1)

sum = 0
a = int(input("A = "))
x = float(input("X = "))
eps = 1e-5
i = 1

addition = equalitySolver(a, i) * x**i
addition /= fact(i)
sum += addition

while (addition > eps):
    print("%s число - %s" % (i, addition))
    i += 1
    addition = equalitySolver(a, i) * x**i
    addition /= fact(i)
    sum += addition

print("Ваше конечное число %s" % (sum + 1))