#include <iostream>
#include <time.h>
using namespace std;

struct Position
{
    int x;
    int y;
};

bool checker(string arr[100], string combine)
{
    for (int i = 0; i < 100; i++)
    {
        if(combine == arr[i]){
            return false;
            break;
        }
        else{
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    srand(time(NULL));

    struct Position pos[8];
    string visited[100];
    string combine;

    for (int i = 0; i < 8; i++)
    {
        while (true)
        {
            int x = (rand() % 20) + 1;
            int y = (rand() % 20) + 1;
            combine = to_string(x) + to_string(y);

            if (i == 0)
            {
                visited[i] = "11";
                pos[i].x = 1;
                pos[i].y = 1;
                break;
            }
            else if (checker(visited, combine) == false)
            {
                continue;
            }
            else{
                visited[i] = combine;
                pos[i].x = x;
                pos[i].y = y;
                break;
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << pos[i].x << " " << pos[i].y << endl;
    }
}

//struct Position p1;
//p1.x = 1;
//p1.y = 1;
//cout << p1.x << " " << p1.y << endl;
//output
//1 1
