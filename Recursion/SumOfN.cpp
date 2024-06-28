#include <bits/stdc++.h>
using namespace std;

//(Parameterised)
// void printSum(int i, int sum) {
//     if(i < 1) {
//         cout << sum;
//         return;
//     }

//     printSum(i-1, sum+i);
// }

//(Functional)
int printSum(int n) {
    if(n == 0) return 0;
    return n + printSum(n-1);
}

int main() {

    int n;
    cin >> n;

    //printSum(n, 0); - parameterised
    cout << printSum(n);

    return 0;
}