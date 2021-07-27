//lib
#pragma once
#include <iostream>
#include "entity.h"
using namespace std;

class Ghost : public Entity
{
    private:
    bool isNearPac;
    //initialise function
    public: 
    //default constructor
    Ghost();

    //constructor 
    Ghost(int x, int y);

    //destructor 
    ~Ghost();
    
    //pure virtual function from parent 
    void move(char input);

};