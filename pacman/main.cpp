#include <iostream>
#include <time.h>
#include "map.h"
#include "ghost.h"
#include "pacman.h"
#include "berry.h"
using namespace std;

int counter = 0;

//send movement to pacman 
void sendchoice(Entity *arr[8], char input){
    arr[0]->move(input);
}

//checker function for createEntities
bool checker(string arr[100], string combine)
{
    for (int i = 0; i < 100; i++)
    {
        if(combine == arr[i]){
            return false;
        }
        else{
            return true;
        }
    }
    return false;
}

//not working now
void createEntities(Entity *arr[8])
{
    string visited[8];
    int counter = 0;
    string combine;
    int rndX;
    int rndY;

    for (int i = 0; i < 8; i++)
    {
        while(true){
            rndX = (rand() % 20) + 1;
            rndY = (rand() % 20) + 1;
            combine = to_string(rndX) + to_string(rndY);

            if(i == 0){
                visited[i] = "11";
                arr[i] = new Pacman(1, 1);
                break;
            }
            else if(checker(visited, combine) == false){
                continue;
            }
            else if(i > 2){
                visited[i] = combine;
                arr[i] = new Ghost(rndX, rndY);
                break;
            }
            else{
                visited[i] = combine;
                arr[i] = new Berry(rndX, rndY);
                break;
            }
        }
    }
}

void loadToMap(Entity *arr[8], Map &obj)
{
    int x, y;
    string name;
    for (int i = 0; i < 6; i++)
    {
        x = arr[i]->getXcoord();
        y = arr[i]->getYcoord();
        name = arr[i]->getName();
        obj.setPos(x, y, name);
    }
}

void mapMenu(Map &obj, Entity *arr[8])
{
    while (true)
    {
        char choice;
        obj.showmap();
        cout << "***T(num) E(num) G(num)***" << endl;
        cout << "(w)Up (s)Down (a)Left (d)Right:";
        cin >> choice;
        sendchoice(arr, choice);
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
    srand(time(NULL)); // provides different seed for each run
    Entity *entities[8] = {nullptr};
    createEntities(entities);
    
    Map grid;
    loadToMap(entities, grid);
    mapMenu(grid, entities);
    cout << "hi";

    return 0;
}