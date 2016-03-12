#pragma once
class SpecialCounter
{
private:
	int startCount = 0;
	int stopCount = 255;

public:
	SpecialCounter();
	~SpecialCounter();
	void start(int start);
	void stop(int stop);
};

