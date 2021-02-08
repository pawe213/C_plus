#include <iostream>
using namespace std;


class Animal2 {
public:
    void speak() {
        cout << "Grrrrr" << endl;
    }
};

class Cat: public Animal2 {
public:
    void jump2() {
        cout << "Cat is jumping" << endl;
    }
};

int main14() {
    Animal2 a;
    a.speak();

    Cat cat;
    cat.speak();
    cat.jump2();
    return 0;

}
