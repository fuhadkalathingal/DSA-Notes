#include <bits/stdc++.h>
using namespace std;

//types of inheritance
//Multiple inheritance
class Parent1{
    public:
    Parent1() {
        cout << "Parent1 class" << endl;
    }
};

class Parent2{
    public:
    Parent2() {
        cout << "Parent2 class" << endl;
    }
};

class Child: public Parent1, public Parent2{
    public:
    Child() {
        cout << "Child class" << endl;
    }
};

class GrandChild : public Child{
    public:
    GrandChild() {
        cout << "GrandChild class" << endl;
    }
};

int main() {
    Child b;
}