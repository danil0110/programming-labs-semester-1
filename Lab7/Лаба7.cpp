#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void arrayInit(float*, int); //инициализация массива
void arrayOutput(float*, int); //вывод массива
float arrayMinPositive(float*, int); //поиск номера минимального элемента среди положительных
float arrayMax(float*, int); //поиск номера максимального элемента
void arraySwap(float*, int, int, int); //перестановка элементов

int main() {
	setlocale(LC_CTYPE, "rus");
	int n; //количество элементов массива
	
	cout << "Введите количество элементов: ";
	cin >> n;

	float* arr = new float[n];

	arrayInit(arr, n);
	arrayOutput(arr, n);
	int minimum = arrayMinPositive(arr, n);
	int maximum = arrayMax(arr, n);
	arraySwap(arr, n, minimum, maximum);
	
	return 0;
}

void arrayInit(float* p, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		*p = rand() % 50 * 0.9 - 25;
		p++;
	}
	cout << endl;
}

void arrayOutput(float* p, int size) {
	for (int i = 0; i < size; i++)
		cout << setw(3) << i + 1 << ": " << setw(5) << p[i] << endl;
	cout << endl;
}

float arrayMinPositive(float* p, int size) {
	float min = -1.0;
	int minIndex = -1;
	for (int i = 0; i < size; i++) {
		if (p[i] >= 0)
			if (min == -1.0)
				min = p[i];
			else
				if (p[i] < min) {
					min = p[i];
					minIndex = i;
				}
	}
	if (min != -1.0) {
		cout << "Минимальный элемент среди положительных имеет индекс " << minIndex + 1 << " и значение " << p[minIndex] << endl;
		return minIndex;
	}
	else {
		cout << "Положительных элементов нет!" << endl << endl;
		return minIndex;
	}
}

float arrayMax(float* p, int size) {
	float max = *p;
	int maxIndex = 0;

	for (int i = 1; i < size; i++)
		if (max < p[i]) {
			max = p[i];
			maxIndex = i;
		}
	cout << "Максимальный элемент массива " << max << endl << endl;
	return maxIndex;
}

void arraySwap(float* p, int size, int first, int second) {
	if (first != -1) {
		float temp = p[first];
		p[first] = p[second];
		p[second] = temp;
		arrayOutput(p, size);
	}
	else
		cout << "Недостаточно элементов для того, чтобы совершить перестановку.";
}