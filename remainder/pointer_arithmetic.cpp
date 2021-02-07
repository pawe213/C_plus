#include <sstream>
#include <iostream>

using namespace std;



int main4()
{

    const int NSTRINGS = 5;
    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    string *pTexts = texts;
    cout << *pTexts << endl;

    pTexts += 1;
    cout << *pTexts << endl;

    return 0;
}





























