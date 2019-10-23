from math import * #для использования функции sqrt

def length(x2,x1,y2,y1):
    return sqrt((x2-x1)**2+(y2-y1)**2) #вычисление расстояния между точками

print("Введите координаты вершин треугольника.")
x1 = int(input("X1 = "))
y1 = int(input("Y1 = "))
x2 = int(input("X2 = "))
y2 = int(input("Y2 = "))
x3 = int(input("X3 = "))
y3 = int(input("Y3 = "))

if x1 == x2 and y1 == y2 or x1 == x3 and y1 == y3 or x2 == x3 and y2 == y3:
    print("Некорректный ввод данных: данная фигура - не треугольник.")
    exit()

len1 = length(x2,x1,y2,y1) #вычисляем длины отрезков
len2 = length(x3,x1,y3,y1)
len3 = length(x3,x2,y3,y2)

print("A = %s\nB = %s\nC = %s" % (len1, len2, len3))

if len1 == len2 and len1 == len3 and len2 == len3:
    print("Данный треугольник является равносторонним.")
elif len1 != len2 and len1 != len3 and len2 != len3:
    print("Данный треугольник является разносторонним.")
elif len1 == len2 != len3 or len1 == len3 != len2 or len2 == len3 != len1:
    print("Данный треугольник является равнобедренным.")
