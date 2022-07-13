#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
public:
	string color;
	virtual void print() = 0; //pure function
};

