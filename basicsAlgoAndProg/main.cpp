#include <iostream>
#include "multiplieOut.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int inpVal;
	bool isLoop = true;

	cout << "��� ������������ ��������� multiplieTable!" << endl;
	
	while (isLoop)
	{		
		cout << "��� �� ������ ������� ?\n1 - ������� ������� ��������� 10 �� 10.\n2 - ������� ������� ��������� ����������������� �������.\n3 - ����� �� ���������" << endl;
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
			cout << "������� ���������� �������� (������):" << endl;
			cin >> coloumnCount;

			if (!(cin >> coloumnCount)) {
				cout << "������� ����������� ��������" << endl;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}

			cout << "������� ���������� ����� (������): " << endl;
			cin >> rowCount;

			if (!(cin >> rowCount)) {
				cout << "������� ����������� ��������" << endl;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}

			multiplieOut table(coloumnCount, rowCount);
			table.output();

		}
		else if (inpVal == 3) { 
			cout << "���������� ��������� �����������!" << endl;
			exit(0);
		}
		else { cout << "������� ����������� ��������!" << endl; }
	}
}
