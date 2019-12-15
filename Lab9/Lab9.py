string = input("Введите строку: ")

flag = False
for i in range(0, len(string)):
    if string.count(string[i]) == 1:
        print("%s: %s" % (string[i], string.count(string[i])))
        flag = True

if flag == False:
    print("Нет символов, которые встречаются единожды")