#ifndef __Bus__
#define __Bus__


#include "Transport.h"




class Bus : public Transport
{

	
	
public:
	short int passenger—apacity;
	void InData(ifstream& ifst);  
	void Out(ofstream& ofst);    

	
	Bus() {}
};

class BusFactory : public TransportFactory {
public:

	BusFactory() :TransportFactory(2) { }


	Transport* Create(int key) {
		if (key == mark)
			return new Bus;
		else
			return nullptr;
	}
};

#endif
