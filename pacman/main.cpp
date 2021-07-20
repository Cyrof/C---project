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
    grid.createMap();
    Position ghost = Position(5, 10, "G");
    ghost.createMap();
    ghost.setNewCoor();
    ghost.showmap();
    int x, y;
    ghost.getCoor(&x, &y);
    cout << x << y << endl;

    return 0;
}