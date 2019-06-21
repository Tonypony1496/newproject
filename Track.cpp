
#include "Track.h"


void Track::InData(ifstream& ifst) {
	ifst >> power;
	ifst >> loadÑapacity;
	
}

void Track::Out(ofstream& ofst) {
	ofst <<"It is the Track. Power of Engine = " << power << "; Load capacity = " << loadÑapacity << endl;
}

namespace {
	TrackFactory tf;
}