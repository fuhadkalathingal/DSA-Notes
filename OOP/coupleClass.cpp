#include <bits/stdc++.h>
using namespace std;

class Couple {
    private:
    int first;
    int second;
    // const int x;

    public:
    // Couple() {
    //     cout << "constructor with no arguments";
    // }

    // Couple(int a) {
    //     cout << "constructor with one argument";
    // }

    // Couple(int a, int b, int c) : first(a), second(b), x(c) {
    // }

    Couple(int a, int b) : first(a), second(b) {
    }

    Couple(Couple &obj) {
        first = obj.getFirst();
        second = obj.getSecond();
    }

    void setFirst(int a) {
        first = a;
    }

    void setSecond(int b) {
        second = b;
    }

    int getFirst() {
        return first;
    }

    int getSecond() {
        return second;
    }

    int multiply() {
        return first * second;
    }

    int multiply(int x) {
        return (first+x) * (second+x);
    }

    int multiply(int x, int y) {
        return (first+x) * (second+y);
    }

    int multiply(Couple obj) {
        return (first + obj.getFirst()) * (second + obj.getSecond());
    }

    ~Couple() {
        cout << "Iam destructor" << endl;
    }
};

int main() {

    Couple couple_1(6, 5);
    Couple couple_3(5, 4);

    // couple_1.setFirst(6);
    // couple_1.setSecond(5);

    cout << couple_1.getFirst() << endl;
    cout << couple_1.getSecond() << endl;
    cout << couple_1.multiply() << endl;
    cout << couple_1.multiply(couple_3) << endl;


    return 0;
}