#include "ReaderRunner.h"

void ReaderRunner::Run()
{
	char listName[100] = "recipe";
	char listText[] = "sdsdsdsd";

	//allocate 10 objects
	for (int i = 0; i < count; i++)
	{
		list[i] = new Reader(listName);
	}

	//insert lines to each list
	for (int i = 0; i < count; i++)
	{
		for (int J = 0; J < 5; J++)
		{
			list[i]->Write(listText);
		}
	}

	//print
	for (int i = 0; i < 10; i++)
	{
		list[i]->Print();
	}

	for (int i = 0; i < 10; i++)
	{
		delete list[i];
	}
}