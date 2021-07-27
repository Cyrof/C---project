//lib
#pragma once
#include <iostream>
#include "entity.h"
using namespace std;

class Ghost : public Entity
{
    //initialise function
    public: 
    //default constructor
    Ghost();

    //constructor 
    Ghost(int x, int y);

    //destructor 
    ~Ghost();

    //virtual function from parent 
    void move(char input);
};