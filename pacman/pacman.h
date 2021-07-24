//lib
#pragma once
#include <iostream>
#include "entity.h"
using namespace std;

class Pacman : public Entity
{
private:
    int numGhostEaten;
    bool canEatGhost;
    char input;

public:
    //default constructor 
    Pacman();

    //constructor
    Pacman(int x, int y);

    //destructor
    ~Pacman();

    //virtual function from parent 
    void move();

    void getInput(char input);
};