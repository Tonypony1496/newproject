#ifndef __Container__
#define __Container__

#include "Transport.h"



class Container
{

	

public:
	int length;
	Container();

	Transport* Top;
	Transport* Bot;

	void Input(ifstream& ifst);
	void Output(ofstream& ofst);
	void Delete();
};

#endif
