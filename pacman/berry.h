//lib
#pragma once
#include <iostream>
#include "entity.h"
using namespace std;

class Berry : public Entity{
    //intialise functions
    public:
    //default constructor
    Berry();

    //constructor
    Berry(int x, int y);

    //destructor
    ~Berry();

    //virtual function from parent
    void move();
};