#include "multiplieOut.h"
int multiplieOut::printSpace(int space, string str) { return lspace + value + rspace; }
void multiplieOut::printVal(int val){ 
	if (to_string(val).length() > 1) { 
		lspace = 1; 
		if (to_string(val).length() == 3) { rspace = 1; }
	}
	else { lspace = 2; }
	cout << barrierY << string(lspace, ' ') << val << string(rspace, ' '); 
}
int multiplieOut::spaceCalc(int lspace, int val, int rspace){ return lspace + val + rspace; }
void multiplieOut::printLineBarr() {
	for (int i = 1; i < 2; i++) {
		for (int j = 2; j <= 11; j++) {
			int value = i * j;
			if (to_string(value).length() > 1) lspace = 1;
			else lspace = 2;

			str += barrierY + string(spaceCalc(rspace, to_string(value).length(), lspace), '-');
		}
	}
	str += barrierY;
}

void multiplieOut::printStartVal() {
	cout << str << endl;
	for (int i = 1; i <= 10; i++) {
		
		if (to_string(i).length() == 2) lspace = 1;
		else lspace = 2;
		if (i > 1) printVal(i);
		else cout << barrierY << string(lspace, ' ') << " " << string(rspace, ' ');
	}
	cout << "|" << endl;
}


void multiplieOut::output() {
	setlocale(LC_ALL, "RU");
	printLineBarr();
	printStartVal();

	for (int i = 2; i <= 10; i++) {
		cout << str << endl;
		printVal(i);
		for (int j = 2; j <= 10; j++) {
			int value = i * j;
			if (to_string(value).length() > 1) lspace = 1;
			/*if (to_string(value).length() == 3) rspace = 1;*/
			else lspace = 2;
			/*cout << "to_string(value).length(): " << to_string(value).length();*/
			
			printVal(value);

		}

		cout << "|" << endl;

	}
	cout << str;
}