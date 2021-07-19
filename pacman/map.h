//lib
#include <iostream>
#include <string>
using namespace std;

// Map class
class Map
{
    //initialise fields
private:
    int counter = 0;
    int counter2 = 0;
    
protected:
    string mapd[21][21];

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