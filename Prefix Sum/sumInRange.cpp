#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n+1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++) {
        arr[i] += arr[i-1];        
    }

    int q;
    cin >> q;

    while(q--) {
        int l, r; cin >> l >> r;

        int ans = 0; // ans = prefixSum arr[r] - prefixSum arr[l-1]
        ans = arr[r] - arr[l-1];
        cout << ans << endl;
    }

    return 0;
}