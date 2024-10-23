#pragma once
#include <string>
#include <iostream>

using namespace std;

template <typename T>
class Vehicle {
    string Model;
    T speed;
public:

    Vehicle(string Model, int speed) : Model(Model), speed(speed)
    {
        cout << "Constructor called for Vehicle " << Model << " its speed is " << speed << endl;
    }
    
    Vehicle<T> operator+(const Vehicle<T>& other) const 
    {
        string newmodel;
        if (this->speed <= other.speed) 
        {
            newmodel = other.Model;
        }
        else
        {
            newmodel = this->Model;
        }
        return Vehicle<T>(newmodel,this->speed + other.speed);
    }


    void startCar()
    {
        cout << "Car " << Model << " started at the speed of " << speed << " !" << endl;
    }

    ~Vehicle()
    {
        cout << "Destructor called for Vehicle " << Model << " its speed is " << speed << endl;
    }
};