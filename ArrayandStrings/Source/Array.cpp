#include "Array.h"

using namespace std;

void Arr::print_array_mems()
{
	int arr[] = { 11,22,13,15,16,1,747,57 };
	cout << "Stored array is ";
	for (auto i : arr) {
		cout << i << " ";
	}
	cout << endl;
	cout << "Printing *arr :" << *arr << endl;
	cout << "Printing *arr + 1: " << * arr + 1 << endl;
	cout << "Printing *(arr+1): " << *(arr + 1) << endl;
	*arr = 10;
	cout << "Changed *arr to 10: ";
	for (auto i : arr) {
		cout << i << " ";
	}
	cout << endl;
	cout << "Printing *arr :" << *arr << endl;
	int& last = arr[1];
	last = 10;
	cout << "Changed second element to 10\n";
	for (auto i : arr) {
		cout << i << " ";
	}
	cout << endl;
}
