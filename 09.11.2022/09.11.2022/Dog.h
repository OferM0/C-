#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
private:
    int gurimCount;
public:
	void SetGurimCount(int agurimCount);
	void PrintgurimCount();
	void PrintAll();
};

