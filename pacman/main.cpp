#include <iostream>
// #include "map.h"
// #include "position.h"
// #include "entity.h"
#include "ghost.h"
#include "pacman.h"
#include "berry.h"
using namespace std;

int main()
{
    int x, y;
    string name;

    Entity* obj[3] = {nullptr};
    obj[0] = new Pacman(1,1);
    obj[1] = new Ghost(5,10);
    obj[2] = new Berry(10, 10);
    obj[0]->move();
    obj[1]->move();
    obj[2]->move();

    obj[2]->setCoord(3,5);
    x = obj[2]->getXcoord();
    y = obj[2]->getYcoord();
    name = obj[2]->getName();

    cout << "x = " << x << " y = " << y << " name = " << name << endl;

    return 0;
}