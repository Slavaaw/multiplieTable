#include <iostream>
#include "multiplieOut.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int inpVal;
	bool isLoop = true;

	cout << "Вас приветствует программа multiplieTable!" << endl;
	
	while (isLoop)
	{		
		cout << "Что вы хотите сделать ?\n1 - Вывести таблицу умножения 10 на 10.\n2 - Вывести таблицу умножения пользовательского размера.\n3 - Выход из программы" << endl;
		if (!(cin >> inpVal)) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (inpVal == 1) {

			multiplieOut obj(10, 10);
			obj.output();
		}

		else if (inpVal == 2) {
			int coloumnCount, rowCount;
			cout << "Введите количество столбцов (ширину):" << endl;
			cin >> coloumnCount;

			if (!(cin >> coloumnCount)) {
				cout << "Введено некоректное значение" << endl;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}

			cout << "Введите количество строк (высоту): " << endl;
			cin >> rowCount;

			if (!(cin >> rowCount)) {
				cout << "Введено некоректное значение" << endl;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}

			multiplieOut table(coloumnCount, rowCount);
			table.output();

		}
		else if (inpVal == 3) { 
			cout << "Выполнение программы остановлено!" << endl;
			exit(0);
		}
		else { cout << "Введено некоректное значение!" << endl; }
	}
}
