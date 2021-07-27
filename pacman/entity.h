//lib
#pragma once
#include <iostream>
#include "position.h"
using namespace std;

class Entity
{
    //initialise fields
protected:
    Position p;
    string name;
    char input;

    //initialise function
public:
    Entity();

    //constructor
    Entity(int x, int y, string n);

    //destructor
    ~Entity();

    //pure virtual function 
    virtual void move(char input) = 0;

    //get x coord 
    int getXcoord();

    //get y coord
    int getYcoord();

    //get name 
    string getName();

    //set pos 
    void setCoord(int x, int y);
};
