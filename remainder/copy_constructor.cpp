#include <sstream>
#include <iostream>

using namespace std;

class Animal {
private:
    string name;

public:
    Animal() {cout << "Animal created" << endl;};
    Animal(const Animal& other): name(other.name) {cout << "Animal created by copying" << endl;};
    void setName(string name) {this->name = name;};
    void speak() const {cout << "My name is: " << name << endl;};
};

int main9()
{

    Animal ccc;
    Animal Dog1;
    Dog1.setName("Burek");

    Animal Dog2 = Dog1;
    Dog2.setName("Reksiu");

    Dog1.speak();
    Dog2.speak();

    Animal Dog3(Dog1);
    Dog3.speak();


    return 0;
}





























