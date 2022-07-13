#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;
class Car :public Vehicle
{
public:
    int gearnom;
    void print() { // Function overloading
        cout << " Hi " << endl;
    }
};

