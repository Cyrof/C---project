//lib
#include "position.h"
using namespace std;

//create constructor
Position::Position(int x, int y)
{
    this->Xcoord = x;
    this->Ycoord = y;
}

//destructor
Position::~Position()
{
    cout << "Destructing Position" << endl;
}

//fuction to set new cood for entity
void Position::setNewCoor(int x, int y)
{
    this->Xcoord = x;
    this->Ycoord = y;
}

int Position::getX(){
    return Xcoord;
}

int Position::getY(){
    return Ycoord;
}