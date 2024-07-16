#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int n) {
    int low = 0, high = n-1, ans = INT_MAX;
    
    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[low] <= arr[mid]) {
            ans = min(ans, arr[low]);
            low = mid+1;
        }else{
            ans = min(ans, arr[mid]);
            high = mid-1;
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();

    bs(arr, n);

    return 0;
}