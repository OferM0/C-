#include "Dog.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Dog::SetGurimCount(int agurimCount)
{
	gurimCount = agurimCount;
}

void Dog::PrintgurimCount()
{
	printf("The dog's gurimCount is:%d.\n", gurimCount);
}

void Dog::PrintAll()
{
	printf("The dog's code is:%d.\nThe dog's name is:%s.\nThe dog's gurimCount is:%d.\n",code,name, gurimCount);
}