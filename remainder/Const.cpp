#include <sstream>
#include <iostream>

using namespace std;

class Animal {
private:
    string name;

public:
    void setName(string name) {this->name = name;};
    void speak() const {cout << "My name is: " << name << endl;};
};

int main8()
{

    const double PI = 3.141592;

    Animal Dog;
    Dog.setName("Burek");
    Dog.speak();
    cout << PI << endl;

    int value = 8;
    int *pValue = &value;
    cout << *pValue << endl;

    int number = 11;
    pValue = &number;


    return 0;
}





























