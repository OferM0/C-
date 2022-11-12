#pragma once
#include "Animal.h"
class Cat :
    public Animal
{
private:
    int gurimCount;
public:
    int age;
    void SetGurimCount(int agurimCount);
    void PrintgurimCount();
    void SetAge(int aage);
    void PrintAge();
    void PrintAll();
};





