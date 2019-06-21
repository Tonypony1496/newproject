
#include "Transport.h"


TransportFactory* TransportFactory::top = nullptr;


TransportFactory::TransportFactory(int m) : mark(m)
{
	this->next = top;
	top = this;
}




Transport* TransportFactory::Make(int key)
{

	Transport* f = nullptr;

	TransportFactory* tmp = top;

	while (tmp) {
		f = tmp->Create(key);
		if (f) return f;
		tmp = tmp->next;
	}
	return nullptr;
}


Transport* TransportFactory::In(ifstream& ifst)
{
	Transport* pf = nullptr;
	int k;
	ifst >> k;

	pf = Make(k);
	if (pf)
	{
		pf->type = k;
		pf->InData(ifst);

	}
	return pf;

}
