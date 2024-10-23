#pragma once
#include <iostream>
#include <thread>
#include <atomic>
using namespace std;
atomic<int> shared(0);
void inc() 
{
    shared++;
}
void threadrunner()
{
    thread t1(inc);
    cout << "Shared Value is " << shared << endl;
    thread t2(inc);
    cout << "Shared Value is " << shared << endl;
    cout << "Process id of thread 1 before running: ";
    cout << t1.get_id() << endl;
    cout << "Process id of thread 2 before running: ";
    cout << t2.get_id() << endl;
    cout << "Shared Value is " << shared << endl;
    t1.join();
    cout << "Process id of thread 1 after running: ";
    cout << t1.get_id() << endl;
    t2.join();
    cout << "Shared Value is " << shared << endl;
    cout << "Process id of thread 2 after running: ";
    cout << t2.get_id() << endl;
}