#include "Employee.h"

void Employee::get_employee_details()
{
    cout << "Name: " << name << ", Salary: " << salary << endl;
}

void Employee::set_salary(double _salary)
{
    salary = _salary;
}

