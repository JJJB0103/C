#include <iostream>
#include "Car.h"
#include "SUV.h"
#include "Motor.h"
#include "Engineer.h"
//using namespace std;
int main() {
	
	SUV* newSUV = new SUV();
	newSUV->setPrice(45000);
	newSUV->setSparewheels(2);
	Engineer engi;
	std::cout << "the Spare Wheels are " << engi.getSparewheels(newSUV) << std::endl;
	
	//std::cout << "Price is " << engi.getCarPrice(newSUV) << "dollars\n";

	delete newSUV;

	//getchar();
	return 123;
}
