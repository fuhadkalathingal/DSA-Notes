#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int t, int n) {
    int low = 0, high = n-1;

    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] == t) return mid;

        if(arr[mid] == arr[low] && arr[high] == arr[mid]) {
            low++;
            high--;
            continue;
        }

        if(arr[low] <= arr[mid]) {
            if(arr[low] <= t && t <= arr[mid]) {
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(arr[mid] <= t && t <= arr[high]) {
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }

    return -1;
}

int main() {

    vector<int> arr = {3, 1, 3, 3, 3, 3, 3};
    int n = arr.size();
    int t = 1;

    cout << bs(arr, t, n);

    return 0;
}