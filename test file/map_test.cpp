#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mapd[21][21];

    //nested for loop to write dimentsions into map
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            if (j > 0 && i == 0)
            {
                mapd[i][j] = to_string(j);
            }
            else if(j > 0 && i > 0)
            {
                mapd[i][0] = to_string(j);
            }
        }
    }

    //print map
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
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