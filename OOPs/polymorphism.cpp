#include <bits/stdc++.h>
using namespace std;

//ability of objects/methods to take different forms(polymorphism)
//compile time polymorphism
//Function overloading - defube a number of functions with same functions name but they perform differently
//according to arguments passed
//eg - Area for different shapes

class Sum{
    public:
    void add(int x, int y) {
        int sum = x+y;
        cout << sum << endl;
    }
    void add(int x, int y, int z) {
        int sum = x+y+z;
        cout << sum << endl;
    }
    void add(float x, float y) {
        float sum = x+y;
        cout << sum << endl;
    }
};

int main() {

    Sum s;
    s.add(2, 3);
    s.add(2, 3, 4);
    s.add(float(2.5), float(3.5));

    return 0;
}