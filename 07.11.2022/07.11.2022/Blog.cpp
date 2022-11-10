#include "Blog.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

Blog::Blog(char aname[100], char asize[1000])
{
	strcpy(name, aname);
	strcpy(size, asize);
}

void Blog::addLine(char line[100])
{
	int lineSize = 0;
	int i = 0;

	while (line[i] != '\0')
	{
		lineSize++;
		i++;
	}


	for (int i = 0; i < 1000; i++)
	{
		if (size[i] == '\0')
		{
			if (i + lineSize+2 > 1000)
			{
				printf("The blog can contain only 1000 chars, please enter shorter line.\n");
				return;
			}
			else {
				for (int j = 0; j < 100; j++)
				{
					if (j == 0)
					{
						size[i] = '\n';
					}

					int k = 0;
					i++;
		
					while (line[k] != '\0')
					{
						size[i] = line[j];
						k++;
						j++;
						i++;
					}
					size[i] = '\0';
					return;
				}
			}
		}
	}
}

void Blog::print()
{
	int blogSize = 0;

	int i = 0;

	while (size[i] != '\0')
	{
		blogSize++;
		i++;
	}


	for (int i = 0; i < blogSize; i++)
	{
		printf("%c", size[i]);
	}
	printf("\n");
}

void Blog::save(char fileName[100])
{
	FILE* f = fopen(fileName, "w");
	if (!f)
	{
		printf("File Erorr, please try again!\n");
		return;
	}

	int blogSize = 0;
	int i = 0;

	while (size[i] != '\0')
	{
		fputc(size[i], f);
		blogSize++;
		i++;
	}
	fclose(f);
}

void Blog::Load(char fileName[100])
{
	FILE* f = fopen(fileName, "r");
	if (!f)
	{
		printf("File Erorr, please try again!\n");
		return;
	}

	size[0] = '\0';
	char getArr[1000];

	while (fgets(getArr, 1000, f))
	{
		strcat(size, getArr);
	}
	fclose(f);
}