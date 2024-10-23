#pragma once
#include <string>
#include <iostream>

using namespace std;

class Employee {
    static constexpr double default_salary = 35000; 
    const string name; 
    double salary;
public:
    Employee(const string& _name, double _salary = default_salary)
        : name(_name), salary(_salary) {}
    ~Employee() {}
    void get_employee_details();
    void set_salary(double _salary);
};
