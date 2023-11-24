#pragma once
#include "Car.h"
class SUV : public Car {
private:
	int spareWheels;
	friend class Engineer;
public:
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
};
