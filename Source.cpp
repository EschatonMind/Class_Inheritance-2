#include<iostream>
#include"Vehicle.h"
#include "Car.h"
using namespace std;

int main() {
	Car c;
	//Vehicle* V1 = new Vehicle;
	Vehicle* V2;
	V2 = &c;
	V2->print();
}