//lib
#include <iostream>
#include "map.h"
using namespace std;

//Position class with map inheritance
class Position : public Map
{
    //initialise fields
private:
    int Xcoord;
    int Ycoord;
    string name;

    //initialise functions
public:
    //constructor
    Position(int x, int y, string n);

    //destructor
    ~Position();

    //change entity coordinates
    void setNewCoor();

    //get entity coordinates
    void getCoor(int *X, int *Y);
};