#pragma once
#define MAX_LINES 10
#define MAX_STR 100

class Reader
{
public:
	/// <summary>
	/// Methods
	/// </summary>

	Reader(char aname[MAX_STR]);

	void Write(char wText[MAX_STR]);

	void Print();

	void GetCurrentRow();
private:
	/// <summary>
    /// Properties
    /// </summary>
	char name[100];
	char text[MAX_LINES][MAX_STR];
	int row;
};

