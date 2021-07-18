#include <iostream>
// #include "map.h"
#include "position.h"
using namespace std;

int main()
{
    // Map grid;
    // grid.showmap();

    // int x, y;

    // Position *test = new Position(5, 10);
    // test->getCoor(&x, &y);

    // int xcoord = x;
    // int ycoord = y;

    // cout << xcoord << " " << ycoord << endl;

    Map grid;
    Position *pac = new Position(1, 1, "P");
    Position *berry = new Position(11, 9, "B");
    pac->setNewCoor();
    berry->setNewCoor();
    grid.showmap();

    return 0;
}