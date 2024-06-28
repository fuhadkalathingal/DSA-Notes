#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //brute force - solution
    // set<int> st;
    // for(int i = 0; i < n; i++) {
    //     st.insert(arr[i]);
    // }

    // int index = 0;
    // for(auto i: st) {
    //     arr[index] = i;
    //     index++; 
    // }

    // cout << index;

    //optimal - solution
    int i = 0;
    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }

    cout << i+1;

    return 0;
}