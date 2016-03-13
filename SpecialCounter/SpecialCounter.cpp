#include "SpecialCounter.h"
#include <iostream>;

using namespace std;


SpecialCounter::SpecialCounter()
{
}


SpecialCounter::~SpecialCounter()
{
}

int SpecialCounter::getStartVal()
{
	return startVal;
}

int SpecialCounter::getStopVal()
{
	return stopVal;
}

int SpecialCounter::getCount()
{
	return count;
}

void SpecialCounter::start(int start)
{
	if ((start >= 0) && (start <= stopVal))
	startVal = start;
}

void SpecialCounter::stop(int stop)
{
	if ((stop <= 255) && (stop >= startVal))
	stopVal = stop;
}

void SpecialCounter::stepInc(int stepSize)
{
	incVal = stepSize;
}

void SpecialCounter::stepDec(int stepSize)
{
	decVal = stepSize;
}

SpecialCounter SpecialCounter::operator++() 
{
	count += 1;
	return *this;    
}

SpecialCounter SpecialCounter::operator--() 
{
	count -= 1;
	return *this;
}

SpecialCounter SpecialCounter::operator++(int)
{
	SpecialCounter duplicate(*this);
	count += 1;
	return duplicate;              
}

SpecialCounter SpecialCounter::operator--(int)
{
	SpecialCounter duplicate(*this);
	count -= 1;
	return duplicate;
}

int main()
{
	SpecialCounter testCounter;

	cout << "default counter:" << endl;
	int i;
	
	for (int i = testCounter.startVal; )

	return 0;
}


