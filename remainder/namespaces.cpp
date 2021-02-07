#include "cat3.h"
#include <iostream>
#include "Animals3.h"

using namespace std;

using namespace pm;

int main() {

    Cat3 cat1;
    cat1.speak();

    pm::Cat3 cat2;
    cat2.speak();

    cats::Cat3 cat3;
    cat3.speak();

    cout << pm::CATNAME << endl;
    cout << cats::CATNAME << endl;

	return 0;
}
