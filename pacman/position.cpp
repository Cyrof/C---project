//lib
#include "position.h"
using namespace std;

//create constructor
Position::Position(int x, int y, string n)
{
    this->Xcoord = x;
    this->Ycoord = y;
    this->name = n;
}

//destructor 
Position::~Position()
{
}

//fuction to set new cood for entity
void Position::setNewCoor()
{
    setPos(Xcoord, Ycoord, name);
}

//function to get coord of entity
void Position::getCoor(int *X, int *Y)
{
    *X = Xcoord;
    *Y = Ycoord;
}