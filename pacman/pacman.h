//lib
#include <iostream>
#include "entity.h"
using namespace std;

class Pacman : public Entity
{
private:
    int numGhostEaten;
    bool canEatGhost;

public:
    Pacman();

    //constructor
    Pacman(int x, int y);

    //destructor
    ~Pacman();

    void move();
};