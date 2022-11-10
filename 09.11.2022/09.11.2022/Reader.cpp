#include "Reader.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

Reader::Reader(char aname[MAX_STR])
{
	row = 0;
	strcpy(name, aname);
}

void Reader::Write(char wText[MAX_STR])
{
	if (row == MAX_LINES)
	{
		return;
	}
	else
	{
		strcpy(text[row], wText);
		row++;
	}
}

void Reader::Print()
{
	printf("The list name is %s\nand the text is\n", name);
	for (int i = 0; i < row; i++)
	{
		printf("%s\n", text[i]);
	}
}

void Reader::GetCurrentRow()
{
	printf("%d", row);
}

