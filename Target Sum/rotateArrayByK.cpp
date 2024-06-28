#include <bits/stdc++.h>
using namespace std;

int main() {

    // int n = 5;
    // int arr[n] = {1, 2, 3, 4, 5};
    // int k = 2;
    // k = k % n;

    // int ans[n];

    // int j = 0;
    // for(int i = n - k; i < n; i++) {
    //     ans[j++] = arr[i];
    // }

    // for(int i = 0; i <= k; i++) {
    //     ans[j++] = arr[i];
    // }

    // for(int i = 0; i < n; i++) {
    //     cout << ans[i] << " ";
    // }

    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    k = k%arr.size();

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());

    for(auto i : arr) {
        cout << i << " ";
    }

    return 0;
}