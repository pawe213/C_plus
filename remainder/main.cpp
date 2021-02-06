#include <sstream>
#include <iostream>
#include "Cat.h"
#include "Cat2.h"
#include "Person.h"

using namespace std;

int main()
{
//    cout << "Program starts.." << endl;
//    Cat2 Jim;
//    Jim.makeHappy();
//    Jim.speak();
//
//    Cat2 bob;
//    bob.makeSad();
//    bob.speak();
//
//    cout << "Programs end." << endl;

//    Person person;
//    cout << person.toString() << endl;
//
//    person.setName("Georgina");
//    cout << person.toString() << endl;
//
//    cout << "Name of person with get method: " << person.getName() << endl;

//    string name = "Bob";
//    int age = 32;
//
//    stringstream ss;
//    ss << "Name: ";
//    ss << name;
//    ss << " age: ";
//    ss << age;
//
//    cout << ss.str() << endl;

//    Person person1;
//    Person person2("Bob");
//    Person person3("Alice", 20);
//
//
//    cout << person1.toString2() << endl;
//    cout << person2.toString2() << endl;
//    cout << person3.toString2() << endl;

    Person person1;
    Person person2("Bob", 42);

    cout << person1.toString2() << endl;
    cout << person2.toString2();


    return 0;
}





























