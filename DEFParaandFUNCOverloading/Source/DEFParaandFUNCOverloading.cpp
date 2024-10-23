// DEFParaandFUNCOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Overldfun.h"

int main()
{
	cout << "Adding two integers using add2 functions which has default params" << endl;
	OverFunctns funs;
	cout << "Passing values 1,2 to add2 function" << endl;
	cout << funs.add2(1, 2) << endl;
	cout << "Passing values 5 to add2 function" << endl;
	cout << funs.add2(5) << endl;
	cout << "Passing values 1.0 to add2 function" << endl;
	cout << funs.add2(1.0) << endl;
	cout << "Passing values 2.0,3.0 to add2 function" << endl;
	cout << funs.add2(2.0,3.0) << endl;
	cout << "Passing values Aryan to add2 function" << endl;
	cout << funs.add2("Aryan") << endl;
	cout << "Passing values Aryan Yadav to add2 function" << endl;
	cout << funs.add2("Aryan ", "Yadav") << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
