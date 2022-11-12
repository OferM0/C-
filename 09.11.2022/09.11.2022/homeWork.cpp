#include "Runner.h"
#include "Kid.h"
#include "Dad.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	Runner r1, r2, r3;
	r1.CreateKidAndCallFunc();
	r2.CreateDogCatAndCallFunc();
	r3.DadFuncCallVirtualKidFunc();

	return 0;
}