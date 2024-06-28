#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[7] = {1, 4, 6, 8, 2, 7, 3};
    int b[7] = {4, 5, 8, 1, 1, 0, 6};

    int n = 7;

    int freq[2001] = {0};
    int ans = 0;

    for(int i  = 0; i < n; i++) {
        int sum = a[i] + b[i];
        ans += freq[sum];
        freq[sum]++;
    }

    cout << ans;

    return 0;
}