#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vehicle {
public:
    string Model;
    int speed;
    Vehicle(string Model, int speed);
    void startCar();
    ~Vehicle();
};