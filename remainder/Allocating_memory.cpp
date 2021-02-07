#include <iostream>

using namespace std;

class Animal {
private:
    string name;

public:
    Animal() {
        cout << "Animal created" << endl;
    }

    Animal(const Animal& other): name(other.name) {
        cout << "Animal created by coping" << endl;
    }

    ~Animal() {
        cout << "Destructor called" << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void speak(){
        cout << "My name is: " << name << endl;
    }
};

Animal *createAnimal() {
    Animal *pAnimal = new Animal();
    pAnimal ->setName("Mruczek2");
    return pAnimal;
}

int main11() {

    Animal *pAnimal = new Animal[10];
    pAnimal[5].setName("Puszek");
    pAnimal[5].speak();

    char *pMem = new char[1000];
    char x = 'X';
    string mix(5, x);
    cout << mix << endl;


    delete [] pAnimal;

    return 0;

};
