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

int SpecialCounter::getIncVal()
{
	return incVal;
}

int SpecialCounter::getDecVal()
{
	return decVal;
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
	startVal += 1;
	return *this;    
}

SpecialCounter SpecialCounter::operator--() 
{
	stopVal -= 1;
	return *this;
}

SpecialCounter SpecialCounter::operator++(int temp)
{
	SpecialCounter duplicate(*this);
	startVal += 1;
	return duplicate;              
}

SpecialCounter SpecialCounter::operator--(int temp)
{
	SpecialCounter duplicate(*this);
	stopVal -= 1;
	return duplicate;
}

int main()
{
	SpecialCounter testCounter;

	cout << "default counter counting up:" << endl;
	int i;
	
	for (int i = testCounter.getStartVal(); i <= testCounter.getStopVal(); i = i + testCounter.getIncVal())
	{
		cout << i << endl;
	}


	//making cutom counter: 
	testCounter.start(20);
	testCounter.stop(210);
	testCounter.stepInc(3);
	testCounter.stepDec(2);

	cout << "custom counter counting up:" << endl;

	for (int i = testCounter.getStartVal(); i <= testCounter.getStopVal(); i = i + testCounter.getIncVal())
	{
		cout << i << endl;
	}

	cout << "custom counter counting down:" << endl;

	for (int i = testCounter.getStopVal();  i >= testCounter.getStartVal(); i = i - testCounter.getDecVal())
	{
		cout << i << endl;
	}

	// operator overloads:
	cout << "custom counter ++ prefix:" << endl;
	for (int i = testCounter.getStartVal(); i <= testCounter.getStopVal(); i = i + testCounter.getIncVal())
	{
		++testCounter;
		cout << testCounter.getStartVal() << endl;
	}

	cout << "custom counter -- prefix:" << endl;
	for (int i = testCounter.getStopVal(); i >= testCounter.getStartVal(); i = i - testCounter.getDecVal())
	{
		--testCounter;
		cout << testCounter.getStopVal() << endl;
	}

	cout << "custom counter ++ postfix:" << endl;
	for (int i = testCounter.getStartVal(); i <= testCounter.getStopVal(); i = i + testCounter.getIncVal())
	{
		testCounter++;
		cout << testCounter.getStartVal() << endl;
	}

	cout << "custom counter -- postfix:" << endl;
	for (int i = testCounter.getStopVal(); i >= testCounter.getStartVal(); i = i - testCounter.getDecVal())
	{
		testCounter--;
		cout << testCounter.getStopVal() << endl;
	}
	return 0;
}


