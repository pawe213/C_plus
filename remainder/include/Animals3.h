#ifndef CAT3_H
#define CAT3_H
#include <iostream>

using namespace std;


namespace pm {

const string CATNAME = "Okruszek";

class Cat3
{
    public:
        Cat3();
        virtual ~Cat3();
        void speak();
    protected:

    private:
};

}
#endif // CAT3_H
