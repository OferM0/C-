#pragma once
class Blog
{
public:
	char name[100];
	char size[1000];

	Blog(char aname[100], char asize[1000]);
	void addLine(char line[100]);
	void print();
	void save(char fileName[100]);
	void Load(char fileName[100]);
};

