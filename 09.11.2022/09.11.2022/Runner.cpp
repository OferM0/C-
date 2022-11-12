#include "Runner.h"
#include "Kid.h"
#include "Dad.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Runner::CreateKidAndCallFunc()
{
	Kid k1;
	k1.Print20();
}

void Runner::CreateDogCatAndCallFunc()
{
	Dog d1, d2;
	Cat c1, c2;
	char animalName[100] = "Kaza";

	d1.SetCode(11);
	d1.SetName(animalName);
	d1.SetGurimCount(5);

	strcpy(animalName, "Lassi");

	d2.SetCode(22);
	d2.SetName(animalName);
	d2.SetGurimCount(10);

	strcpy(animalName, "Chita");

	c1.SetCode(33);
	c1.SetName(animalName);
	c1.SetGurimCount(4);
	c1.SetAge(7);

	strcpy(animalName, "Niki");

	c2.SetCode(44);
	c2.SetName(animalName);
	c2.SetGurimCount(2);
	c2.SetAge(12);

	d1.PrintAll();
	d2.PrintAll();
	c1.PrintAll();
	c2.PrintAll();
}

void Runner::DadFuncCallVirtualKidFunc()
{
	Kid k2;
	k2.PrintNumber();
}

