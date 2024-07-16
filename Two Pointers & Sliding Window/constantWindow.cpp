#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {-1, 2, 3, 3, 4, 5, -1};
    int k = 4, n = 7;

    int r = k-1, l = 0;
    int window_sum = 0;
    for(int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    while(r < n-1) {
        window_sum -= arr[l];
        l++;
        r++;
        window_sum += arr[r];
        max_sum = max(max_sum, window_sum);
    }

    cout << max_sum;

    return 0;
}