//lib
#include "entity.h"
using namespace std;

Entity::Entity()
{
}

//constructor
Entity::Entity(int x, int y, string n)
{
    this->name = n;
    this->p = Position(x, y);
}

//destructor
Entity::~Entity()
{
    cout << "Destructing Entity" << endl;
}

int Entity::getXcoord()
{
    int x = p.getX();
    return x;
}

int Entity::getYcoord()
{
    int y = p.getY();
    return y;
}

string Entity::getName()
{
    return name;
}

void Entity::setCoord(int x, int y)
{
    p.setNewCoor(x, y);
}