#include "map.h"
using namespace std;

Map::Map()
{
    
}

void Map::createMap()
{
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            mapd[i][j] = to_string(j);
        }
    }
}

void Map::showmap()
{
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            cout << mapd[i][j];
            // if (j < 20)
            // {
            //     cout << mapd[i][j];
            // }
            // else
            // {
            //     cout << mapd[i][j] << endl;
            // }
        }
    }
}