#include "Car.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Car::Drive(int kms)
{
	km += kms;
	driveCount += 1;
}

void Car::PrintStatus()
{
	printf("The car number: %d drove %d times which is %d km and avg of %d km per drive\n", carId, driveCount, km, km / driveCount);
}

Car::Car(int kms, char colors[10], int carsId, char seat, int drivesCount)
{
	km = kms;

	strcpy(color, colors);

	if (carsId)
	{
		carId = carsId;
	}
	else
	{
		printf("please enter car id\n");
		scanf("%d", &carId);
	}

	seats = seat;

	if (drivesCount)
	{
		driveCount = drivesCount;
	}
	else
	{
		driveCount = 0;
	}
}
