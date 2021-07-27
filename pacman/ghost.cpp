#include "ghost.h"
using namespace std;

Ghost::Ghost(){

}

Ghost::Ghost(int x, int y) : Entity(x, y, "G"){
}

Ghost::~Ghost(){
    cout << "Destructing Ghost" << endl;
}

void Ghost::move(char input){
    
    //srand(time(NULL))
    this->input = input;
    input = (rand() % 4) + 1;
    switch(input)
    {
        case 1:
            input = 'w';
            break;
        case 2:
            input = 'a';
            break;
        case 3:
            input = 's';
            break;
        case 4:
            input = 'd';
            break;
    }
}