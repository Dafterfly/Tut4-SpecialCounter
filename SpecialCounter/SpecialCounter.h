#pragma once
class SpecialCounter
{
private:
	int startVal = 0;
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
};

