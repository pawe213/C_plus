#include <sstream>
#include <iostream>

using namespace std;

void manipulate(double *pValue) {
    cout << "2. Value of int in manipulate: " << *pValue << endl;
    *pValue = 10;
    cout << "3. Value of int in manipulate: " << *pValue << endl;

}

int main1()
{
    int nValue = 8;
    int* pnValue = &nValue;

    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int adress: " << pnValue << endl;

    cout << "Int value via Pointer: " << *pnValue << endl;

    cout << "==================" << endl;
    double dValue = 123.4;
    double* pdValue = &dValue;

    cout << "1. dValue: " << dValue << endl;
    manipulate(&dValue);
    manipulate(pdValue);
    cout << "4. dValue: " << dValue << endl;


    return 0;
}





























