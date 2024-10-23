#include "Vehicle.h"

Vehicle::Vehicle(string _Model = "None", int _Speed = 0) : Model(_Model), speed(_Speed)
{
    cout << "Constructor called for Vehicle " << Model << " its speed is " << speed << endl;
}

Vehicle::Vehicle(Vehicle& v1):Model(v1.Model),speed(v1.speed)
{
    cout << "Copy constructor called for Vehicle " << v1.Model << " its speed is " << v1.speed << endl;
}

Vehicle::Vehicle(Vehicle& v1, string Model) : Model(Model) , speed(v1.speed)
{

    cout << "Copy Constructor called which modifies model name " << Model << " its speed is " << v1.speed << endl;
}

Vehicle::Vehicle(Vehicle& v1, int speed) : Model(v1.Model), speed(speed)
{
    cout << "Copy Constructor called which modifies speed " << v1.Model << " its speed is " << speed << endl;
}

Vehicle::~Vehicle()
{
    cout << "Object Vehicle destructed with model name " << Model << " speed " << speed << endl;
}



