#include <bits/stdc++.h>
using namespace std;

// int search(vector<int> &arr, int n, int target) {
//     int low = 0, high = n-1;

//     while(low <= high) {
//         int mid = (low+high)/2;
//         if(arr[mid] == target) return mid;
//         else if(target > arr[mid]) low = mid+1;
//         else high = mid-1;
//     }

//     return -1;
// }

//recursive implementation
int search(vector<int> &arr, int low, int high, int target) {
    if(low > high) return -1;

    int mid = (low+high)/2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]) return search(arr, mid+1, high, target);
    return search(arr, low, mid-1, target); 
}

int main() {

    int n = 8;
    vector<int> arr = {2, 3, 7, 12, 14, 17, 20, 24};
    int target = 17;

    // cout << search(arr, n, target);
    cout << search(arr, 0, n-1, target);



    return 0;
}