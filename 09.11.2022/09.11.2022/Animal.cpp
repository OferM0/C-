#include "Animal.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Animal::SetCode(int acode)
{ 
	code = acode;
}

void Animal::PrintCode()
{
	printf("The animal's code is: %d\n", code);
}

void Animal::SetName(char aname[100])
{ 
	strcpy(name, aname);
}

void Animal::PrintName()
{ 
	printf("The animal's name is: %s\n", name);
}