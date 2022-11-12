#include "Base.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

int Base::AddNum(int anum)
{
	num = anum;
	num = num + Calc();
	return num;
}

int Base::IAmPrivate(int anum)
{
	num2 = anum;
	return 0;
}

int Base::IAmProtected(int anum)
{
	num4 = anum;
	return 0;
}

int Base::Calc()
{
	return 999;
}

