#include "sstream"
#include "Person.h"
#include <iostream>

using namespace std;

//Person::Person()
//{
//    name = "";
//    age = 0;
//}

//Person::Person(string newName, int newAge)
//{
//    this->name = newName;
//    this->age = newAge;
//
//    cout << "memory location of object: " << this << endl;
//}

Person::Person(string name, int age): name(name), age(age) {
}

//Person::Person(): name("unnamed"), age(0)
//{
//}


string Person::toString(){
    return "Person's name is: " + name;
}

string Person::toString2(){
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << " Age: ";
    ss << age;

    return ss.str();

}

void Person::setName(string newName) {
    name = newName;
}

string Person::getName(){
    return name;
}
