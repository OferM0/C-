#pragma once
class Car
{
public:
	/// <summary>
	/// Properties
	/// </summary>
	int km;
	char color[10];
	int carId;
	char seats;
	int driveCount;

	/// <summary>
	/// Methods
	/// </summary>	
	Car(int kms, char colors[10], int carsId, char seat, int drivesCount);

	void Drive(int kms);

	void PrintStatus();

};

