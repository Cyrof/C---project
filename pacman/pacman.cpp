#include "pacman.h"
using namespace std;

Pacman::Pacman(){
    
}

//constructor 
Pacman::Pacman(int x, int y){
    this->EX = x;
    this->EY = y;
    this->name = "P";
}

void Pacman::move(){
    cout << "hi" << endl;
}