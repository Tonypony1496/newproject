#ifndef __Transport__
#define __Transport__

#include <fstream>
using namespace std;


class Transport {

public:
	int type;
	int power;
	Transport* next = NULL;
	Transport* prev = NULL;
	

	virtual void InData(ifstream& ifst) = 0;
	virtual void Out(ofstream& ofst) = 0;

	//    Transport() {};
};

class TransportFactory
{
protected:
public:
	TransportFactory(int m);
	static Transport* Make(int key);
	static Transport* In(ifstream& ifst);
	virtual Transport* Create(int key) = 0;
	int mark;
	static TransportFactory* top;
	TransportFactory* next;
};

#endif
