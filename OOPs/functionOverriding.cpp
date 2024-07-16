#include <bits/stdc++.h>
using namespace std;

//runtime polymorphsim

class Parent{
    public:
    virtual void print() {
        cout << "parent class" << endl;
    }
    void show() {
        cout << "parent class" << endl;
    }
};

class Child : public Parent{
    public:
    void print() {
        cout << "Child class" << endl;
    }
    void show() {
        cout << "Child class" << endl;
    }
};

int main() {
    Parent *p;
    Child c;

    p = &c;
    p->print();
    p->show();

    return 0;
}