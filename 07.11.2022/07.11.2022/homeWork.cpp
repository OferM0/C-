#include <iostream>
#include <string.h>
#include "Car.h"
#include "Blog.h"
#pragma warning(disable:4996)

int main()
{
	/*
	char n1[] = "black";
	char n2[] = "white";
	char n3[] = "yellow";
	char n4[] = "green";
	char n5[] = "red";


	Car Car1(30000, n1, 301231, 6, 389);
	Car Car2(50000, n2, 126543, 9, 35);
	Car Car3(123000, n3, 2461771, 4, 1229);
	Car Car4(6000, n4, NULL , 2, 99);
	Car Car5(66000, n5, 441414, NULL , 16);

	Car1.PrintStatus();
	Car2.PrintStatus();
	Car3.PrintStatus();
	Car4.PrintStatus();
	Car5.PrintStatus();*/

	char text[1000], name[100];
	printf("Please enter blog name\n");
	scanf("%s", name);
	printf("Please enter text\n");
	scanf("%s", text);
	Blog b1(name, text);

	char line[100];
	printf("Please enter line\n");
	scanf("%s", line);
	b1.addLine(line);

	printf("Please enter line\n");
	scanf("%s", line);
	b1.addLine(line);

	printf("Please enter line\n");
	scanf("%s", line);
	b1.addLine(line);

	b1.print();

	char fileName[100];
	printf("Please enter file name\n");
	scanf("%s", fileName);
	b1.save(fileName);

	printf("Please enter line\n");
	scanf("%s", line);
	b1.addLine(line);
	
	printf("Please enter file name\n");
	scanf("%s", fileName);
	b1.Load(fileName);

	b1.print();

	return 0;
}