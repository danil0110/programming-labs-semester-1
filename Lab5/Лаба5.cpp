#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "Программа выводит все трехзначные числа которые равны сумме кубов своих цифр:\n";
	for (int i = 1; i < 10; i++)
		for (int j = 0; j < 10; j++)
			for (int k = 0; k < 10; k++)
				if ((pow(i, 3) + pow(j, 3) + pow(k, 3) > 99) and (pow(i, 3) + pow(j, 3) + pow(k, 3) < 1000) and (pow(i,3)+pow(j,3)+pow(k,3)==i*100+j*10+k))
					cout << i << j << k << ' ';
	return 0;
}