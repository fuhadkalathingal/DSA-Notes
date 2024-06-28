#include <bits/stdc++.h>
using namespace std;

// void printNum(int i, int n) {
//     if(i > n) return;
//     cout << i << " ";
//     printNum(i+1, n);
// }

void printNum(int i, int n) {
    if(i < 1) return;
    printNum(i-1, n);
    cout << i << " ";
}

int main() {

    int n;
    cin >> n;

    // printNum(1, n); with i+1
    printNum(n, n); //with i-1;

    return 0;
}