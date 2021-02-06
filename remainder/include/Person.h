#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
    public:
//        Person();
        Person(): name("unnamed"), age(0) {};
        Person(string newName) {name =newName; age = 0;};
        Person(string newName, int newAge);
        void setName(string newName);
        string toString();
        string toString2();
        string getName();
        string name;
        int age;
    protected:

    private:
};

#endif // PERSON_H
