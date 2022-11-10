#include <iostream>
#include <string.h>
#include "Dog.h"

int main1()
{
    /*
	Dog Kaza;
	Dog Losi;

	Kaza.age = 13;
	strcpy_s(Kaza.name, "Kaza");
	Kaza.weight = 40000;
	Kaza.Eating(170);
	Kaza.Sleeping(30);
	Kaza.Playing();
    */


    char n1[] = "Kazablan";
    char n2[] = "Lassi";
    Dog Kaza(n1, 3, 40000);
    Dog Lassi(n2, 10, 27000);
    Dog* dyndyn = new Dog(n2,6 ,23000 );

    Kaza.Eating(170);
    Kaza.Sleeping(30);
    for (size_t i = 0; i < 10; i++)
    {
        Kaza.Playing();
    }

    Lassi.weight = 25000;
    Lassi.Playing();
    
    return 0;
}