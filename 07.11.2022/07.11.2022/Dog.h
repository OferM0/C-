#pragma once
class Dog
{
public:
	/// <summary>
	/// Properties
	/// </summary>
	char name[100];
	int age;
	int weight;

	/// <summary>
	/// Methods
	/// </summary>
	
	Dog(char aname[100], int aage, int aaweight);

	void Barking(int acount);

	void Eating(int agram);

	void Playing();

	void Sleeping(int aminutes);

};

