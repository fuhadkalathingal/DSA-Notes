#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> ans(n);
    int arr[n];

    for(int i  = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_ele =  -1;

    for(int i = n-1; i >= 0; i--) {
        ans[i] = max_ele;
        max_ele = max(arr[i], max_ele);
    }

    for(auto i : ans) {
        cout << i << " ";
    }

    return 0;
}