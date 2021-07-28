#include <iostream>
#include <time.h>
#include <string>
#include "map.h"
#include "ghost.h"
#include "pacman.h"
#include "berry.h"
using namespace std;

int counter = 0;

//checker function for createEntities
bool checker(string arr[100], string combine)
{

    for (int i = 0; i < 100; i++)
    {
        if (combine == arr[i])
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

void Pacmancollisioncheck(Entity *arr[8], char input)
{
    string allcoords[8];
    string combine;
    int x, y;
    for(int i = 0; i < 8; i++)
    {
        x = arr[i]->getXcoord();
        y = arr[i]->getYcoord();
        combine = to_string(x) + to_string(y);
        allcoords[i] = combine;
        for(int x = 0; x < 4; x++)
        {
            switch(x)
            {
                case 0: // Up
                 x += 1;
                 combine = to_string(x) + to_string(y);
                 if(checker(allcoords,combine) == true)
                 {
                     if(arr[1])
                     {

                     }
                 }
            }
        }
    }
}

// get name for Pac, check if P/S, if P, check for Berry
// if S, check for Ghost
// In Ghost class, check for Pac, if Pac found, move to Pac

bool checkGhostDir(string arr[3][4], int n)
{
    while(true)
    {
        int randnum = rand() % 3;
        if(arr[n][randnum] == "No") // collide
        {
            continue;
        }
        else
        {
            return true;
            break;
        }
    }
    return false;
}

void Ghostcollisioncheck(Entity *arr[8])
{
    string allcoords[8];
    string combine;
    string ghostdir[3][4]; // arr containing 3 ghost, 4 directions
    bool moveToPac = false;
    int PacX, PacY;
    int x, y;

    for (int i = 0; i < 8; i++)
    {
        x = arr[i]->getXcoord();
        y = arr[i]->getYcoord();
        combine = to_string(x) + to_string(y);
        allcoords[i] = combine;
    }

    for (int j = 3; j <= 5; j++)
    {
        x = arr[j]->getXcoord();
        y = arr[j]->getYcoord();
        for (int x = 0; x < 4; x++) // Check for all 4 directions
        {
            switch (x)
            {
            case 0:
                x += 1; // Up
                combine = to_string(x) + to_string(y);
                if(checker(allcoords,combine) == true)
                {
                    ghostdir[j][0] = "No";
                    if(allcoords[0] == combine)
                    {
                        moveToPac = true;
                    }
                }
                else
                {
                    ghostdir[j][0] = "Yes";
                }
                if(checkGhostDir(ghostdir, j) == true) // check for which ghost (j = 3...)
                {
                    arr[j]->setCoord(x,y); // random direction
                }
            case 1:
                x -= 1; // Down
                combine = to_string(x) + to_string(y);
                if(checker(allcoords,combine) == true)
                {
                    ghostdir[j][1] = "No";
                    if(allcoords[0] == combine)
                    {
                        moveToPac = true;
                        arr[j]->setCoord(x,y);
                    }
                }
                else
                {
                    ghostdir[j][1] = "Yes";
                }
                if(checkGhostDir(ghostdir, j) == true) // check for which ghost (j = 3...)
                {
                    arr[j]->setCoord(x,y); // random direction
                }
            case 2:
                y += 1; // Right
                combine = to_string(x) + to_string(y);
                if(checker(allcoords,combine) == true)
                {
                    ghostdir[j][2] = "No";
                    if(allcoords[0] == combine)
                    {
                        moveToPac = true;
                        //arr[j]->hitPac(moveToPac);
                        arr[j]->setCoord(x,y);
                    }
                }
                else
                {
                    ghostdir[j][2] = "Yes";
                }
                if(checkGhostDir(ghostdir, j) == true) // check for which ghost (j = 3...)
                {
                    arr[j]->setCoord(x,y); // random direction
                }
            case 3:
                y -= 1; // Left
                combine = to_string(x) + to_string(y);
                if(checker(allcoords,combine) == true)
                {
                    ghostdir[j][3] = "No";
                    if(allcoords[0] == combine)
                    {
                        moveToPac = true;
                        arr[j]->setCoord(x,y); // move towards Pacman
                        
                    }
                }
                else
                {
                    ghostdir[j][3] = "Yes";
                }
                if(checkGhostDir(ghostdir, j) == true) // check for which ghost (j = 3...)
                {
                    arr[j]->setCoord(x,y); // random direction
                }
            }
        }
    }
} // if coords is "No" and coords = Pac, move towards Pac



//send movement to pacman
void sendchoice(Entity *arr[8], char input)
{
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] != nullptr)
        {
            arr[i]->move(input);
        }
    }
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
        while (true)
        {
            rndX = (rand() % 20) + 1;
            rndY = (rand() % 20) + 1;
            combine = to_string(rndX) + to_string(rndY);

            if (i == 0)
            {
                visited[i] = "11";
                arr[i] = new Pacman(1, 1);
                break;
            }
            else if (checker(visited, combine) == true)
            {
                continue;
            }
            else if (i > 2)
            {
                visited[i] = combine;
                arr[i] = new Ghost(rndX, rndY);
                break;
            }
            else
            {
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

void mapMenu(Entity *arr[8])
{
    while (true)
    {
        Map grid;
        loadToMap(arr, grid);
        char choice;
        grid.showmap();
        cout << "***T(num) E(num) G(num)***" << endl;
        cout << "(w)Up (s)Down (a)Left (d)Right:";
        cin >> choice;
        sendchoice(arr, choice);
        //not working:
        Ghostcollisioncheck(arr);
        if (choice == 'x')
        {
            break;
        }
        else
        {
            cout << choice << endl;
        }
        delete &grid;
        counter++;
    }
}

int main()
{
    srand(time(NULL)); // provides different seed for each run
    Entity *entities[8] = {nullptr};
    createEntities(entities);
    mapMenu(entities);


    return 0;
}