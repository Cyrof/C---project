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
    for (int i = 0; i < 8; i++){
        if (i == 0) {
            arr[i] = new Pacman(1,1);
        }
        else{
            int rndX = (rand() % 20) + 1;
            int rndY = (rand() % 20) + 1;
            if (i < 3){
                arr[i] = new Berry(rndX, rndY);
            }
            else{
                arr[i] = new Ghost(rndX, rndY);
            }
        }
    }

}

void loadToMap(Entity *arr[8], Map &obj)
{
    int x, y;
    string name;
    for (int i = 0; i < 8; i++)
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
    Entity *entities[8] = {nullptr};
    createEntities(entities);

    for (int i = 0; i < 8; i ++){
        int x = entities[i]->getXcoord();
        int y = entities[i]->getYcoord();
        string name = entities[i]->getName();
        cout << "name = " << name << " x = " << x << " y = " << y << endl;
    }

    Map grid;
    loadToMap(entities, grid);
    mapMenu(grid);


    return 0;
}