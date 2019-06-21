#ifndef __Track__
#define __Track__


#include "Transport.h"


class Track : public Transport
{
	
	
public:
	int load—apacity;
	void InData(ifstream& ifst);  
	void Out(ofstream& ofst);     

	
	Track() {}
};

class TrackFactory : public TransportFactory {
public:

	TrackFactory() :TransportFactory(1) { }


	Transport* Create(int key) {
		if (key == mark)
			return new Track;
		else
			return nullptr;
	}
};


#endif
