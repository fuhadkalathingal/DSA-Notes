#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = INT_MAX;
    int min2 = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(min > arr[i]) {
            min = min2;
            min = arr[i];
        }else if(min2 > arr[i] && min != arr[i]) {
            min2 = arr[i];
        }
    }

    cout << min << " " << min2;
    
    return 0;
}