#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int t, int n) {
    int low = 0, high = n-1;
    int ans = n;

    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] >= t) {
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return ans;
}

int main() {
    int n = 10;
    vector<int> arr = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    //low bound means that arr[i] >= x;
    int x;
    cin >> x;

    cout << bs(arr, x, n);

    return 0;
}