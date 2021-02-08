#include <iostream>
using namespace std;


class Animal3 {
public:
    virtual void speak() {cout << "????????" << endl;}

    virtual ~Animal3() {};
};

class Cat3: public Animal3 {
public:
    virtual void speak() {cout << "RRRRRrrRRR" << endl;}

    virtual ~Cat3() {};
};

class HouseCat: public Cat3 {
public:
    virtual void speak() {cout << "meeouww" << endl;}

    virtual ~HouseCat() {};
};

int main() {

    HouseCat *pAnimal = new HouseCat;
    pAnimal->speak();


    delete pAnimal;


    return 0;

}
