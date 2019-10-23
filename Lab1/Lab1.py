print('''Данная программа умеет решать систему уравнений:
A1x + B1y = C1
A2x + B2y = C2
Введите коэффициенты:''')
a1 = int(input("A1 = "))
b1 = int(input("B1 = "))
c1 = int(input("C1 = "))
a2 = int(input("A2 = "))
b2 = int(input("B2 = "))
c2 = int(input("C2 = "))

det = a1 * b2 - a2 * b1
if det == 0:
    print("Система не имеет решений: определитель равень 0.")
    exit()

temp1 = b2 - (b1 * a2 / a1) #метод Гаусса
temp2 = c2 - (c1 * a2 / a1)
y = temp2/temp1
x = (c1 - b1 * y) / a1

print('X =',x)
print('Y =',y)
