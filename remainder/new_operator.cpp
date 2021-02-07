//#include <iostream>
//
//using namespace std;
//
//class Animal {
//private:
//    string name;
//
//public:
//    Animal() {
//        cout << "Animal created" << endl;
//    }
//
//    Animal(const Animal& other): name(other.name) {
//        cout << "Animal created by coping" << endl;
//    }
//
//    ~Animal() {
//        cout << "Destructor called" << endl;
//    }
//
//    void setName(string name) {
//        this->name = name;
//    }
//
//    void speak(){
//        cout << "My name is: " << name << endl;
//    }
//};
//
////Animal *createAnimal() {
////    Animal *pAnimal = new Animal();
////    pAnimal ->setName("Mruczek2");
////    return pAnimal;
////}
//
//int main10() {
////// Part 1
////    Animal *pCat1 = new Animal();
////    pCat1->setName("Mruczek");
////    pCat1->speak();
////    delete pCat1;
//
//// Part 2
//    Animal *pFrog = createAnimal();
//    pFrog->speak();
//    delete pFrog;
//
//    return 0;
//
//};
