#include "Vehicle.h"

Vehicle::Vehicle(string _Model = "None", int _Speed = 0) : Model(_Model), speed(_Speed)
{
    cout << "Constructor called for Vehicle " << Model << " its speed is " << speed << endl;
}

void Vehicle::startCar()
{
    cout << "Car " << Model << " started at the speed of " << speed << " !" << endl;
}

Vehicle::~Vehicle()
{
    cout << "Destructor called for Vehicle " << Model << " its speed is " << speed << endl;
}