#include "SpecialCounter.h"


SpecialCounter::SpecialCounter()
{
}


SpecialCounter::~SpecialCounter()
{
}

void SpecialCounter::start(int start)
{
	startVal = start;
}

void SpecialCounter::stop(int stop)
{
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


