def fact(chislo):
    if chislo == 1:
        return 1
    else:
        return chislo * fact(chislo - 1)

def teylor(arg):
    i = 1
    number = (-1)**(i) * arg**(2*i) / fact(i*2)
    i += 1
    while number > eps:
        number += (-1)**(i) * arg**(2*i) / fact(i*2)
        i += 1
    return arg - number

a = float(input("Введите A: "))
b = float(input("Введите B: "))
eps = float(input("Введите точность: "))

y = teylor(a) + teylor(b)**2 + teylor(a+b)

print("Ваше значение равняется", y)