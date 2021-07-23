//lib
#include <iostream>
#include "position.h"
using namespace std;

class Entity : public Position
{
    //initialise fields
private:
    Position p;

    //initialise function
public:
    //constructor
    Entity(int x, int y);

    //destructor
    ~Entity();

    virtual void move();
};
