//lib
#include "berry.h"
using namespace std;

Berry::Berry(){

}

Berry::Berry(int x, int y) : Entity(x, y, "B"){
}

Berry::~Berry(){
    cout << "destructing Berry" << endl;
}

void Berry::move(char input){
    cout << "Berry Move" << endl;
}