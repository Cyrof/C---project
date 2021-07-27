#include "pacman.h"
using namespace std;

Pacman::Pacman(){
    
}

//constructor 
Pacman::Pacman(int x, int y) : Entity(x, y, "P"){

}

Pacman::~Pacman(){
    cout << "destructing pacman" << endl;
}

void Pacman::move(char input){
    this->input = input;
    switch (input)
    {
        case 'w':
            Pacman::setCoord(getXcoord() + 2, getYcoord());
            break;
        case 's':
            Pacman::setCoord(getXcoord()- 2, getYcoord());
            break;
        case 'a':
            Pacman::setCoord(getXcoord() , getYcoord()- 2);
            break;
        case 'd':
            Pacman::setCoord(getXcoord() , getYcoord()+ 2);
            break;
    }
    cout << "Pacman move" << endl;
}
