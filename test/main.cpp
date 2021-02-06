#include <iostream>
#include <iomanip>

#include "utils.h"

using namespace std;

void showMenu();

int main()
{
    showMenu();

    int values[3];
    values[0] = 88;
    values[1] = 188;
    values[2] = 288;

    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;


    return 0;
}

void showMenu(){
    cout << "1. Search" << endl;
    cout << "2. Viev Record" << endl;
    cout << "3 Quit" << endl;
}
