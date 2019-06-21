#include "Container.h"

Container::Container()
{
	length = 0;
	Top = NULL;
	Bot = NULL;
}


void Container::Input(ifstream& ifst)
{

	Transport* cur;
	Transport* prev;

	while (!ifst.eof())
	{
		cur = TransportFactory::In(ifst);

		if (cur == NULL)
		{
			return;
		}

		if (Top == NULL)
		{
			Top = cur;
			Top->next = NULL;
			Top->prev = NULL;

			Bot = cur;
			Bot->next = NULL;
			Bot->prev = NULL;

		}
		else
		{
			Bot->next = cur;
			prev = Bot;
			Bot = cur;
			Bot->next = NULL;
			Bot->prev = prev;
		}

		length++;
	}

}

void Container::	Output(ofstream& ofst)
{
	int index = 0;
	Transport* cur = Top;
	ofst << "Contains " << length << " elements" << endl;
	for (; cur != 0; cur = cur->next)
	{
		ofst << index << ": ";
		cur->Out(ofst);
		ofst << endl;
		index++;
	}
	
}

void Container::Delete()
{
	Transport* cur = Top;
	while (cur != NULL)
	{
		cur = Top->next;
		delete Top;
		Top = cur;
	}
	length = 0;
}

