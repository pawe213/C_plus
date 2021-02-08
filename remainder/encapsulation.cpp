#include <iostream>
using namespace std;


class Frog {
private:
    string name;
public:
    Frog(string name): name(name) {this->name = name;};
    string getName() {return name;}
};

int main15() {
    Frog frog("Ksiaze");
    cout << frog.getName();
    return 0;

}
