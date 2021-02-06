#include <iostream>
#include "Cat2.h"

using namespace std;

Cat2::Cat2(){
    cout << "Cat created" << endl;
    happy = true;
}

Cat2::~Cat2(){
    cout << "Cat destructed" << endl;
}

void Cat2::speak(){
    if (happy) {
        cout << "Meouw!" << endl;
    }
}

void Cat2::makeHappy(){
    happy = true;
}

void Cat2::makeSad(){
    happy = false;
}
