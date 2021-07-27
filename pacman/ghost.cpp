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
    // Ghost moves in main
}