#include "DELPTR.h"
#include <iostream>
#include <string>

using namespace std;

void Deleter::del() {
    int size = 5;
    int* intArray = new int[size];

    for (int i = 0; i < size; ++i) {
        intArray[i] = i * 10 + i;
        cout << "intArray[" << i << "] = " << intArray[i] << endl;
    }
    string* str = new string("Hello, World!");
    cout << "String: " << *str << endl;
    delete[] intArray;
    delete str;
    cout << "After deletion:" << endl;
    cout << "intArray[0]: " << intArray[0] << endl;
    cout << "String: " << *str << endl;
}
