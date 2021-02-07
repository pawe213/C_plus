#include <sstream>
#include <iostream>

using namespace std;



int main3()
{

    string texts[] = {"one", "two", "three"};
    cout << sizeof(texts)/sizeof(string) << endl;

    string *pTexts = texts;

    for (int i=0; i<sizeof(texts)/sizeof(string); i++){
        cout << pTexts[i] << " " << flush;
    }

    cout << "=====================" << endl;
    for (int i=0; i<sizeof(texts)/sizeof(string); i++){
        cout << *pTexts << " " << flush;
        pTexts++;
    }

    cout << "=====================" << endl;

    string *pElement = texts; // same as string *pEndElement = &texts[0];
    string *pEnd = &texts[2];

    while(true) {
        cout << *pElement << " " << flush;


        if(pElement == pEnd) {
            break;
        }

        pElement++;
    }



    return 0;
}





























