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

void Pacman::move(){
    cout << "Pacman move" << endl;
}

void Pacman::getInput(char input){
    this->input = input;
}