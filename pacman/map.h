//lib
#pragma once
#include <iostream>
#include "entity.h"
using namespace std;

// Map class
class Map
{
    //initialise fields
private:
    int counter = 0;
    int counter2 = 0;
    string mapd[21][21];
    // Entity* arr[8];

    //initialise functions
public:
    // constructor
    Map();

    //destructor
    ~Map();

    //create map
    void createMap();

    //show map function (getter)
    void showmap();

    //set pos of entitiy (setter)
    void setPos(int x, int y, string name);

};