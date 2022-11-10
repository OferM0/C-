#include "Dog.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

Dog::Dog(char aname[100], int aage, int aweight)
{
	strcpy(name, aname);
	age = aage;
	weight = aweight;
}

void Dog::Barking(int acount)
{
	weight -= 2*acount;
}

void Dog::Eating(int agram)
{
	weight += agram;
}

void Dog::Playing()
{
	weight -= 1000;
}

void Dog::Sleeping(int aminutes)
{
	weight -= aminutes;
}