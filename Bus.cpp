
#include "Bus.h"


void Bus::InData(ifstream& ifst) {
	ifst >> power;
	ifst >> passenger�apacity;
	
	
}

void Bus::Out(ofstream& ofst) {
	
	ofst << "It is the Bus. Power of Engine = " << power << "; Passenger capacity = " << passenger�apacity << endl;
}

namespace {
	BusFactory bf;
}