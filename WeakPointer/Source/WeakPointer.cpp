// WeakPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include "Vehicle.h"

using namespace std;
int main()
{
    shared_ptr<Vehicle> myCar = make_shared<Vehicle>("Hyundai", 120);
    cout << "Asking shared_ptr the count before declaring weak_ptr: "<< myCar.use_count() << endl;
    weak_ptr<Vehicle> weak_myCar = myCar;
    cout << "Asking shared_ptr the count before declaring weak_ptr: " << myCar.use_count() << endl;
    if (auto sharedfromweak = weak_myCar.lock()) {
        sharedfromweak->startCar();
        cout << "Instances of shared_ptr: " << sharedfromweak.use_count() << endl;
    }
    else {
        cout << "Pointer already deleted." << endl;
    }
    cout << myCar.owner_before(weak_myCar) << endl;
    weak_myCar.reset();
    if (auto sharedfromweak = weak_myCar.lock()) {
        sharedfromweak->startCar();
        cout << "Instances of shared_ptr: " << sharedfromweak.use_count() << endl;
    }
    else {
        cout << "Pointer already deleted." << endl;
    }
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
