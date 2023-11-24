#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price; // access protected or private
}

int Engineer::getSparewheels(SUV* yy) {
	return yy->spareWheels; // access protected or private
}
