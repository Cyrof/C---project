#include <iostream>
#include <string>
using namespace std;

class Map
{
private:
    int counter = 0;
    int counter2 = 0;
    string mapd[20][20];

public:
    Map();

    void createMap();

    void showmap();
};