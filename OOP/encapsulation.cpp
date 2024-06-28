#include <bits/stdc++.h>
using namespace std;

//Binding of methods & together into a single unit(class)
//How - data is only acessable from the class methods. Method means function of class
//It also leads to data abstraction / hiding, so it is called abstract data type(ADT)

class ABC{
    private: //by default it is private no need to mention
    int x;

    public:
    void set(int n) {
        x = n;
    }
    int get() {
        return x;
    }
};

int main() {
    ABC obj1;
    obj1.set(3);
    cout << obj1.get() << endl;

    return 0;
}