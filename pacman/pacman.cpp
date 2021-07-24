#include "pacman.h"
using namespace std;

Pacman::Pacman(){
    
}

//constructor 
Pacman::Pacman(int x, int y) : Entity(x, y, "P"){
}

void Pacman::move(){
    cout << "Pacman move" << endl;
}