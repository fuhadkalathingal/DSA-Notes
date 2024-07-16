#include <bits/stdc++.h>
using namespace std;

int main() {

    //count subarray sum equals k

    vector<int> arr = {1, 0, 1, 0, 1}; 
    int k = 2; int count = 0; int n = arr.size();

    int l = 0, r = 0, sum = 0;

    if(k < 0) return 0;

    //TC - O(2N*2)
    while(r < n) {
        sum += arr[r];
        while(sum > k) {
            sum -= arr[l];
            l++;
        }
        count += (r-l+1);
        r++;
    }

    return 0;
}