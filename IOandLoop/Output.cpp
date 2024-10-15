#include "Output.h"

using namespace std;
void Output::print_precise_values()
{
	double pi = 3.14159265358979323846;
	cout << "----------------------------------------" << endl;
	cout << "The actual double value of PI : " << pi << endl;
	cout.precision(21);
	cout << "The value of PI after setting precision 21 : " << pi << endl;
	cout.precision(10);
	cout << "The value of PI after setting precision 10 : " << pi << endl;
}
