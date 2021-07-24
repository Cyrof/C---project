//lib
#pragma once
#include <iostream>
using namespace std;

//Position class with map inheritance
class Position
{
    //initialise fields
private:
    int Xcoord;
    int Ycoord;

    //initialise functions
public:
    Position();
    //constructor
    Position(int x, int y);

    //destructor
    ~Position();

    //change entity coordinates
    void setNewCoor(int x, int y);

    //get x coord
    int getX();

    //get y coord
    int getY();
};