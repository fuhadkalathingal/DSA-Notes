#include <bits/stdc++.h>
using namespace std;

int increment(int a, int x = 1) {
    a = a + x;
    return a;
}

int main() {
    int a, x;
    cin >> a >> x;
    a = increment(a, x);
    a = increment(a); //x takes the value 1
    cout << a;
    return 0;
}