#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mapd[21][21];
    int counter = 0;
    int counter2 = 0;

    //nested for loop to write dimentsions into map
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            if (j > 0 && i == 0)
            {
                mapd[i][0] = "";
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
                    if (i < 10)
                    {
                        mapd[i][0] = to_string(i);
                    }
                    else if (i < 20){
                        mapd[i][0] = to_string(counter2);
                        counter2++;
                    }
                    else{
                        mapd[i][0] = "0";
                    }
                }
                else
                {
                    mapd[i][j] = "";
                }
            }
        }
    }

    //print map
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            if (i == 0 && j == 0)
            {
                cout << " ";
            }
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