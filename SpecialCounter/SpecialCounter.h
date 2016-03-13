#pragma once
class SpecialCounter
{
private:
	int startVal = 0;
	int count = startVal;
	int stopVal = 255;
	int incVal = 1;
	int decVal = 1;

public:
	SpecialCounter();
	~SpecialCounter();
	void start(int start);
	void stop(int stop);
	void stepInc(int stepSize);
	void stepDec(int stepSize);
	void counter();
	SpecialCounter operator++();
	SpecialCounter operator--();
	SpecialCounter operator++(int num);
	SpecialCounter operator--(int num);

};

