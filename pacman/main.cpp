#include <iostream>
#include "map.h"
// #include "position.h"
// #include "entity.h"
#include "ghost.h"
#include "pacman.h"
#include "berry.h"
using namespace std;

int counter = 0;

// void cal(char choice){

// }

//not working now 
void createEntities(Entity *arr[8])
{
    string check[20];
    int counter = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            int rndx = (rand() % 20) + 1;
            int rndy = (rand() % 20) + 1;
            check[counter] = to_string(rndx) + to_string(rndy);
            counter++;
            string combine = to_string(rndx) + to_string(rndy);
            if (combine == check[j])
            {
                if (i == 0)
                {
                    arr[i] = new Pacman(rndx, rndy);
                    break;
                }
                if (i < 3)
                {
                    arr[i] = new Berry(rndx, rndy);
                    break;
                }
                else
                {
                    arr[i] = new Berry(rndx, rndy);
                    break;
                }
            }
        }
    }
}

void loadToMap(Entity *arr[8], Map &obj)
{
    int x, y;
    string name;
    for (int i = 0; i < 3; i++)
    {
        x = arr[i]->getXcoord();
        y = arr[i]->getYcoord();
        name = arr[i]->getName();
        obj.setPos(x, y, name);
    }
}

void mapMenu(Map &obj)
{
    while (true)
    {
        char choice;
        obj.showmap();
        cout << "***T(num) E(num) G(num)***" << endl;
        cout << "(w)Up (s)Down (a)Left (d)Right:";
        cin >> choice;
        if (choice == 'x')
        {
            break;
        }
        else
        {
            cout << choice << endl;
        }
        counter++;
    }
}

int main()
{
    // Entity *obj[3] = {nullptr};
    // obj[0] = new Pacman(1, 1);
    // obj[1] = new Ghost(5, 10);
    // obj[2] = new Berry(10, 10);
    Entity *entities[8] = {nullptr};
    createEntities(entities);
    Map grid;
    loadToMap(entities, grid);
    mapMenu(grid);

    // int x, y;
    // string name;
    // Map grid;

    // obj[0]->move();
    // obj[1]->move();
    // obj[2]->move();

    // obj[2]->setCoord(3,5);
    // x = obj[2]->getXcoord();
    // y = obj[2]->getYcoord();
    // name = obj[2]->getName();

    // cout << "x = " << x << " y = " << y << " name = " << name << endl;

    // int rnd = (rand() % 20) + 1;
    // cout << rnd << endl;

    // for (int i = 0; i < 3; i++){
    //     x = obj[i]->getXcoord();
    //     y = obj[i]->getYcoord();
    //     name = obj[i]->getName();
    //     grid.setPos(x,y,name);
    // }

    // grid.showmap();

    return 0;
}