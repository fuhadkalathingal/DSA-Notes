#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = n-1; i >= 0; i--) {
        int didSwap = 0; 
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }

    for(auto i : arr) {
        cout << i << " ";
    }

    return 0;
}