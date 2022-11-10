#pragma once
class Ball
{
public:
	/// <summary>
	/// Properties
	/// </summary>
	char color[10];
	char raduis;  //in cm
	unsigned short weight;  //in grams

	/// <summary>
	/// Methods
	/// </summary>
	void Catch();

	void Jump();

	void Throw();
};



