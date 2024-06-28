#include <bits/stdc++.h>
using namespace std;

// void reverseArr(int l, int r, int arr[]) {
//     if(l >= r) return;
//     swap(arr[l], arr[r]);
//     reverseArr(l+1, r-1, arr);
// }

void reverseArr(int i, int n, int arr[]) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArr(i+1, n, arr);
}

int main() {

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // reverseArr(0, n-1, arr); used multiple variables
    reverseArr(0, n, arr); //using single variable

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}