#include <iostream>
#include <string>

using namespace std;

void welcome();
string stringInit();
void findAloneSymbols(string);
int main() {
	setlocale(LC_CTYPE, "ru");
	welcome();
	string str = stringInit();
	findAloneSymbols(str);
	return 0;
}

void welcome() {
	cout << "Данная программа выводит те символы, которые встречаются единожды, а так же их позиции." << endl;
}

string stringInit() {
	string str;
	cout << "Введите строку: ";
	getline(cin, str);
	return str;
}

void findAloneSymbols(string str) {
	string str2 = "";
	char sym;
	int quantity, pos, count = 0;
	for (int i = 0; i < str.length(); i++) {
		sym = str[i];
		if (str2.find(sym) > 999999) {
			str2 += sym;
			quantity = 1;
			pos = i;
			for (int j = i + 1; j < str.length(); j++) {
				if (sym == str[j]) {
					count++;
					quantity++;
					break;
				}
			}
			if (quantity == 1)
				cout << sym << ": " << pos + 1 << endl;
		}
		else
			count++;
	}

	if (count == str.length())
		cout << "Нет символов, встречающиеся единожды.";
}