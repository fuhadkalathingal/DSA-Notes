#include <bits/stdc++.h>
using namespace std;

//types of inheritance
//Single inheritance
class Parent{
    public:
    Parent() {
        cout << "Parent class" << endl;
    }
};

class Child: public Parent{
    public:
    Child() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child b;
}