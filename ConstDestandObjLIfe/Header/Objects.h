#pragma once
#include <iostream>

using namespace std;
class Object {
    int data_mem1;
public:
    Object(int num) : data_mem1(num){
        cout << "OBJECT" << num << "Created" << endl;
    }
    ~Object() {
        cout << "OBJECT" << data_mem1 << "Destroyed" << endl;
    }
    void print_data_member();
};