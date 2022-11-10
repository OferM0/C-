#pragma once
class Base
{
public:
	int num = 0;
	int AddNum(int anum);
	int num3;
	int Calc();

private: //private
	int num2;
	int IAmPrivate(int anum);

protected: //protected
	int num4;
	int IAmProtected(int anum);

};

