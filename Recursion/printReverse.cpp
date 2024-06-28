#include <bits/stdc++.h>
using namespace std;

// void printReverse(int i, int n) {
//     if(i > n) return;
//     printReverse(i+1, n);
//     cout << i << " ";
// }

void printReverse(int i, int n) {
    if(i < 1) return;
    cout << i << " ";
    printReverse(i-1, n);
}

int main() {
    int n;
    cin >> n;

    // printReverse(1, n); with i+1;
    printReverse(n, n); // with i-1;

    return 0;
}