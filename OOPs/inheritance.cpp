#include <bits/stdc++.h>
using namespace std;

// a class inherits properties of another class
// B inherits A class, so A is called Parent class/Super class and B is called sub class/child class
//used for code reusability
//Access specifiers - Public(acesss anywhere from the code), Private(acessible only in own class), 
//Protected(acessible only from own class, parent class & child class)

class Parent{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class child1: public Parent{
    //x will remain pubic
    //y will remain protected
    //z will not be accessible

};

class child2: private Parent{
    //x will remain private
    //y will remain private
    //z will not be accessible
};

class child3: protected Parent{
    //x will remain protected
    //y will remain protected
    //z will not be accessible
};

int main() {
    Parent p;
    B c;

    return 0;
}