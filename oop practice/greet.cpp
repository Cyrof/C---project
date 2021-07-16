#include <iostream>
#include "greet.h"

greeting::greeting(string text){
    Text = text;
}

void greeting::display(){
    cout << Text << endl; 
}