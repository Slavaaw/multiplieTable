#pragma once
#include <iostream>
#include <string>

using namespace std;
class multiplieOut
{
public:
	int printSpace(int space, string str);
	void printVal(int val);
	int spaceCalc(int lspace, int val, int rspace);
	void printLineBarr();
	void printStartVal();
	void output();
private:
	string barrierY = "|";
	string barrierX = "-";
	string str;
	int lspace = 2, rspace = 2, value;
};

