#include "Reader.h"
#include <iostream>
#include <string.h>
#include "ReaderRunner.h"
#include "Base.h"
#include "Child.h"
#include "ItemPrice.h"
#include "ItemPriceEilat.h"
#pragma warning(disable:4996)

int main()
{
	/*
	char listName[100], listText[100];
	printf("Please enter list name:\n");
	scanf("%s", listName);
	Reader List(listName);

	for (int i = 0; i < 12; i++)
	{
		printf("Please enter text:\n");
		scanf("%s", listText);
		List.Write(listText);
	}

	List.Print();*/

	/*
	ReaderRunner runner;
	runner.Run();/*

	/*
	Base b;
	b.AddNum(10);
	int num = b.Calc();

	Child c;
	c.AddNum(5);
	num = c.AddNum(12);*/

	ItemPriceEilat e;
	int num=e.Calc(100);
}