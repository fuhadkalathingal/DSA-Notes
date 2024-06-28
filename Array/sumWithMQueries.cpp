#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    int a[n] = {4, 2, 6, 8, 9, 3, 1};
    int preSum[n] = {0};

    preSum[0] += a[0];
    for(int i = 1; i < n; i++) {
        preSum[i] = preSum[i-1] + a[i];
    }

    int m;
    cin >> m;

    while(m--) {
        int i, j;
        cin >> i >> j;

        int ans = 0;
        if(i == 0) {
            ans = preSum[j];
        }else {
            ans = preSum[j] - preSum[i-1];
        }

        cout << ans << endl;
    }


    return 0;
}