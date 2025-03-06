#pragma once
#include <iostream>
#include <string>


/*��� �������� ���������:
* ...
*/

using namespace std;
class multiplieOut
{
public:
	multiplieOut(int rangeX, int rangeY);
	void output();

private:
	string barrierX, barrierY, lineBar, header;
	int coloumnCount, rowsCount, cellLength, lspace, rspace, value, total_spaces; // ����� ������ � ��������� � �.�.
	void setLineBar();
	void printLineBar() const;
	void printVal(int val);
	int lengthCalc(int) const;
	void setSpaces(int);
	void setHeader();
	void printHeader() const;
};