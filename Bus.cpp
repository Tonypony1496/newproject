
#include "Bus.h"


void Bus::InData(ifstream& ifst) {
	ifst >> power;
	ifst >> passengerĐapacity;
	
	
}

void Bus::Out(ofstream& ofst) {
	
	ofst << "It is the Bus. Power of Engine = " << power << "; Passenger capacity = " << passengerĐapacity << endl;
}

namespace {
	BusFactory bf;
}