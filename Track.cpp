
#include "Track.h"


void Track::InData(ifstream& ifst) {
	ifst >> power;
	ifst >> load�apacity;
	
}

void Track::Out(ofstream& ofst) {
	ofst <<"It is the Track. Power of Engine = " << power << "; Load capacity = " << load�apacity << endl;
}

namespace {
	TrackFactory tf;
}