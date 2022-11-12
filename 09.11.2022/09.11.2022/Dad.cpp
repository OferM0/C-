#include "Dad.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Dad::Print100()
{
	printf("100\n");
}

void Dad::PrintNumber()
{
	printf("%d\n", ReturnNum());
}

int Dad::ReturnNum()
{
	return 101;
}