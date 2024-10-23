#include "Input.h"

using namespace std;
void Input::ignore_10_chars()
{	
	string name;
	cout << "Enter 1234567890{YourName with no spaces}" << endl;
	cin.ignore(10);
	cin >> name;
	cout << "This actual string is " << name << endl;
}
