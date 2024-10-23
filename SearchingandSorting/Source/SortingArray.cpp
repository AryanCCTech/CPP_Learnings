#include "SortingArray.h"
#include <algorithm>

using namespace std;
void SortingArr::print_str_array_mems()
{
	int n = 4;
	cout << "Actual Array of Strings: ";
	string arrr[] = { "ab","12","!@","AB"};
	for (auto i = arrr; i != arrr + n; ++i) {
		cout << *i << " ";
	}
	cout << endl;
	sort(arrr, arrr + n);
	cout << "Normal Sorting Default Ascending: ";
	for (auto j = arrr; j != arrr + n; ++j) {
		cout << *j << " ";
	}
	cout << endl;
	sort(arrr, arrr+n, greater<string>());
	cout << "Specified Sorting Descending: ";
	for (auto j = arrr; j != arrr + n; ++j) {
		cout << *j << " ";
	}
	cout << endl;
}
