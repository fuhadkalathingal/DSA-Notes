#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2; int n = arr.size();

    int max_leng = 0, leng = 0;
    int l = 0, r = 0, zero_count = 0;

    //better approach - TC - O(2N)
    // while(r < n) {
    //     if(arr[r] == 0) zero_count++;
    //     while(zero_count > k) {
    //         if(arr[l] == 0) zero_count--;
    //         l++;
    //     }
    //     leng = r-l+1;
    //     max_leng = max(leng, max_leng);
    //     r++;
    // }

    //optimal approach - TC - O(N)
    while(r < n) {
        if(arr[r] == 0) zero_count++;
        if(zero_count > k) {
            if(arr[l] == 0) zero_count--;
            l++;
        }
        if(zero_count <= k) {
            leng = r-l+1;
            max_leng = max(max_leng, leng);
        }
        r++;
    }

    cout << max_leng;

    return 0;
}