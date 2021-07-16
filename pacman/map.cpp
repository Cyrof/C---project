#include "map.h"
using namespace std;

Map::Map()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            mapd[i][j] = j + 1;
        }
    }
}

void Map::showmap()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (j != 19)
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