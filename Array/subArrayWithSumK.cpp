#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    long long t;
    cin >> t;

    //brute force - solution
    // int leng = 0;
    // for(int i = 0; i < 10; i++) {
    //     for(int j = i; j < 10; j++) {
    //         int sum = 0;
    //         for(int k = i; k <= j; k++) {
    //             sum += arr[k];
    //         }
    //         if(sum == t) {
    //             leng = max(leng, (j-i)+1);
    //         }
    //     }
    // }

    // cout << leng;

    //better - solution (for negatives this is the optimal solution)
    // map<long long, int> preSum;
    // long long sum = 0;
    // int max_len = 0;

    // for(int i = 0; i < 10; i++) {
    //     sum += arr[i];
    //     if(sum == t) {
    //         max_len = max(max_len, i+1);
    //     }

    //     int rem = sum - t;
    //     if(preSum.find(rem) != preSum.end()) {
    //         int len = i - preSum[rem];
    //         max_len = max(max_len, len);
    //     }

    //     if(preSum.find(rem) == preSum.end()) {
    //         preSum[sum] = i;
    //     }
    // }

    // cout << max_len;

    //optimal only for positive(two pointer)

    int n = arr.size();
    int right = 0, left = 0;
    long long sum = arr[0];
    int max_len = 0;

    while(right < n) {
        while(left <= right && sum > t) {
            sum -= arr[left];
            left++;
        }
        if(sum == t) {
            max_len = max(max_len, (right-left)+1);
        }
        right++;
        sum += arr[right];
    }

    cout << max_len;
    
    return 0;
}