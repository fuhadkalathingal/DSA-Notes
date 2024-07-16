#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    public:
    int l;
    int b;

    Rectangle() { //default constructor
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) { //parameterised constructor
        l = x;
        b = y;
    }

    Rectangle(Rectangle &r) { //copy constructor - intialise an obj by another existing object
        l = r.l;
        b = r.b;
    }

    ~Rectangle() {
        cout << "Destructed" << endl;
    }
};

int main() {
    Rectangle r1;
    cout << r1.l << " " << r1.b << endl;

    Rectangle r2(5, 6);
    cout << r2.l << " " << r2.b << endl;

    Rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;

    Rectangle* r4 = new Rectangle();
    delete r4;

    return 0;
}