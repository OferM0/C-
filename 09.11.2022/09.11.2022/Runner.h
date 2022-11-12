#pragma once
#include "Dad.h"
#include "Kid.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

class Runner
{
public:
	void CreateKidAndCallFunc();
	void CreateDogCatAndCallFunc();
	void DadFuncCallVirtualKidFunc();
};

