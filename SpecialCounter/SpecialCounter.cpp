#include "SpecialCounter.h"


SpecialCounter::SpecialCounter()
{
}


SpecialCounter::~SpecialCounter()
{
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




