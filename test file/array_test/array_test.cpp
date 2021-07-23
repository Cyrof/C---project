#include <iostream>
using namespace std;

int main()
{
    string arr[3][2] = {{"2", "1"}, {"6", "4"}};

    for (int i = 0; i < 3; i++)
    {
        // if(arr[i] == nullptr){
        //     cout << "empty" << endl;
        // }
        // else{
        //     cout<< "hi" << endl;
        // }

        if (arr[i][0] != ""){
            cout << stoi(arr[i][0]) << endl;
        }
    }

    return 0;
}
