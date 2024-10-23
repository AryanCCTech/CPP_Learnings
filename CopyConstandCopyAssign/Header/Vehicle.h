#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vehicle {
    public:
        string Model;
        int speed;
    Vehicle(string Model,int speed);
    Vehicle(Vehicle& v1);
    Vehicle(Vehicle& v1, string Model);
    Vehicle(Vehicle& v1, int speed);
    ~Vehicle();
};