#include "multiplieOut.h"

multiplieOut::multiplieOut(int rangeX, int rangeY) : header(""), barrierY("|"), lineBar(""), coloumnCount(0), rowsCount(0), cellLength(5), lspace(2), rspace(2), value(0), total_spaces(0) {
	
	if (rangeX <= 100 and rangeY <= 100) {
		coloumnCount = rangeX;
		rowsCount = rangeY;

	setLineBar();
	printLineBar();
	setHeader();
	printHeader();
	printLineBar();
	}
	else { cout << "Слишком большие размеры! Максимольно допустимые значения: 100 на 100" << endl; }
}

void multiplieOut::printVal(int val){ 
	setSpaces(val);
	cout << barrierY << string(lspace, ' ') << val << string(rspace, ' '); 
}
int multiplieOut::lengthCalc(int val) const{ return to_string(val).length(); }

void multiplieOut::setLineBar() {
	int counter = 0;
	while (counter != coloumnCount) {
		lineBar += barrierY + string(cellLength, '-');
		counter++;
	}
	lineBar += barrierY;
}

void multiplieOut::printLineBar() const { cout << lineBar << endl; }

void multiplieOut::setSpaces(int val) {
	total_spaces = cellLength - lengthCalc(val);
	lspace = total_spaces / 2;
	rspace = total_spaces - lspace;
}

void multiplieOut::setHeader() {
	header += barrierY + string(cellLength, ' ');
	for (int counter = 2; counter <= coloumnCount; counter++) {
		setSpaces(counter);
		header += barrierY + string(lspace, ' ') + to_string(counter) + string(rspace, ' ');
	}
	header += barrierY;
}

void multiplieOut::printHeader() const { cout << header << endl; }

void multiplieOut::output() {

	for (int i = 2; i <= rowsCount; i++) {
		
		printVal(i);

		for (int j = 2; j <= coloumnCount; j++) {
			value = i * j;
			printVal(value);
		}
		cout << "|" << endl;
		printLineBar();

		

	}
}