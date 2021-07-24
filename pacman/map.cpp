//lib
#include "map.h"
using namespace std;

// constructor of map class which generates map when obj is create
Map::Map()
{
    //nested for loop to build map dynamically
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            //if statement to create the dimension for the map
            if (i == 0 && j > 0)
            {
                mapd[i][0] = " ";
                //if else to create 1-0 twice
                if (j > 9 && j < 20)
                {
                    mapd[i][j] = to_string(counter);
                    counter++;
                }
                else if (j == 20)
                {
                    mapd[i][j] = "0";
                }
                else
                {
                    mapd[i][j] = to_string(j);
                }
            }
            else
            {
                if (j == 0)
                {
                    mapd[i][j] = to_string(i);
                }
                else
                {
                    mapd[i][j] = "0";
                }
            }
        }
    }
}

//destructor function
Map::~Map()
{
    cout << "Desturcting base" << endl;
}

//function to set pos for entity
void Map::setPos(int x, int y, string name)
{
    mapd[x][y] = name;
}

// function to show the map
void Map::showmap()
{
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            // if (i == 0 && j == 0)
            // {
            //     cout << " ";
            // }
            // if (j < 20)
            // {
            //     cout << mapd[i][j];
            // }
            // else
            // {
            //     cout << mapd[i][j] << endl;
            // }
            if (j > 0 && mapd[i][j] == "0" && i > 0)
            {
                if (j < 20)
                {
                    cout << " ";
                }
                else
                {
                    cout << " " << endl;
                }
            }
            else
            {
                if (j < 20)
                {
                    cout << mapd[i][j];
                }
                else
                {
                    cout << mapd[i][j] << endl;
                }
            }
        }
    }
}

//void Map::createEntities

//void Map::getInput(char input){
    //obj[i].getInput(input)
// }

