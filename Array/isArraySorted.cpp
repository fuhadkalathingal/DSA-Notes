#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i = 0; i < n; i += 2) {
        if(arr[i+1] < arr[i]) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << isSorted(arr, n);

    
}