
#include "Bus.h"


void Bus::InData(ifstream& ifst) {
	ifst >> power;
	ifst >> passengerÑapacity;
	
	
}

void Bus::Out(ofstream& ofst) {
	
	ofst << "It is the Bus. Power of Engine = " << power << "; Passenger capacity = " << passengerÑapacity << endl;
}

namespace {
	BusFactory bf;
}