#include "Overldfun.h"
#include <string>

int OverFunctns::add2(int num1, int num2)
{
	return num1 + num2;
}

double OverFunctns::add2(double num1, double num2)
{
	cout.precision(10);
	return num1 + num2;
}

string OverFunctns::add2(string str1, string str2)
{
	return string(str1 + str2);
}


