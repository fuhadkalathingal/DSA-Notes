#include <bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real;
    int imaginary;
    
    Complex(int x, int y) {
        real = x;
        imaginary = y;
    }

    Complex operator+ (Complex &c2) {
        Complex ans(0, 0);
        ans.real = real + c2.real;
        ans.imaginary = imaginary + c2.imaginary;
        return ans;
    }
};

int  main() {
    Complex c1(1, 2);
    Complex c2(1, 3);

    Complex c3 = c1+c2;
    cout << c3.real << " "<<c3.imaginary;

    return 0;
}