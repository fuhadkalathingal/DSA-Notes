#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> ans;
    int right = low, left = mid+1;
    while(right <= mid && left <= high) {
        if(arr[right] < arr[left]) {
            ans.push_back(arr[right]);
            right++;
        }else{
            ans.push_back(arr[left]);
            left++;
        }
    }

    while(right <= mid) {
        ans.push_back(arr[right]);
        right++;
    }

    while(left <= high) {
        ans.push_back(arr[left]);
        left++;
    } 

    for(int i = low; i <= high; i++) {
        arr[i] = ans[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if(low >= high) return;
    int mid = (low+high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);

    //3 1 2 4 1 5 2 6 4

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    for(auto i : arr) {
        cout << i << " ";
    }

    return 0;
}