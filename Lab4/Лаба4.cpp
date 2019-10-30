#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;    // количество значений
	setlocale(LC_CTYPE, "rus");
    cout << "Данная программа выводит значения температуры по шкале Цельсия и их эквивалентов по шкале Фаренгейта от 0 до n.\nВведите n: ";
	cin >> n;
	cout << setw(3) << 'C' << setw(7) << 'F' << endl;
	for (int i = 0; i <= n; i++)
		cout << setw(3) << i << setw(7) << 1.8 * i + 32 << endl;
	return 0;
}
