#include <bits/stdc++.h>
using namespace std;

//types of inheritance
//Hierarchical inheritance
class Parent1{
    public:
    Parent1() {
        cout << "Parent1 class" << endl;
    }
};


class Child1: public Parent1{
    public:
    Child1() {
        cout << "Child1 class" << endl;
    }
};

class Child2: public Parent1{
    public:
    Child2() {
        cout << "Child2 class" << endl;
    }
};


int main() {
    Child1 a;
    Child2 b;
}