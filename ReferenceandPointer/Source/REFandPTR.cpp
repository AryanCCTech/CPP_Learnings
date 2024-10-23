#include "REFandPTR.h"
#include <string>

using namespace std;
void REFandPTR::ref_and_ptr()
{
	string str = "ARYAN";
	int len = str.size();
	string& fstr = str;
	char* ptr = &str[0];
	cout << "Printing chars of a string using len and pointer to the reference of 1st char " << endl;
	for (int i = 0; i < len; i++) {
		cout << "Position :" << i << " " << (ptr + i) << endl;
	}
}
