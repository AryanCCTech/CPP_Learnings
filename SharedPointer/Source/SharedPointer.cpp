// SharedPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include "Vehicle.h"

using namespace std;
int main()
{
    shared_ptr<Vehicle> myVehicle = make_shared<Vehicle>("Hyundai", 100);
    shared_ptr<Vehicle> myVehicle2 = myVehicle;
    shared_ptr<Vehicle> myVehicle3 = myVehicle;
    shared_ptr<Vehicle> myVehicle1 = myVehicle;
    cout << "Number of pointers pointin to this oject are " << myVehicle.use_count() << " " << myVehicle3.use_count() << endl;
    cout << myVehicle3.owner_before(myVehicle) << endl ;
    cout << myVehicle.owner_before(myVehicle2) << endl ;
    myVehicle->startCar();
    myVehicle.reset();
    myVehicle->startCar();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
