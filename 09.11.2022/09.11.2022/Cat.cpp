#include "Cat.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Cat::SetGurimCount(int agurimCount)
{
	gurimCount = agurimCount;
}

void Cat::PrintgurimCount()
{
	printf("The cat's gurimCount is:%d.\n", gurimCount);
}

void Cat::SetAge(int aage)
{
	age = aage;
}

void Cat::PrintAge()
{
	printf("The cat's age is:%d.\n", age);
}

void Cat::PrintAll()
{
	printf("The cat's code is:%d.\nThe cat's name is:%s.\nThe cat's gurimCount is:%d.\nThe cat's age is:%d.\n", code, name, gurimCount, age);
}
