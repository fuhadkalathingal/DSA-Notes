#include <bits/stdc++.h>
using namespace std;

bool checkPrefixSuffixSum(vector<int> &arr) {
    int total_sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        total_sum += arr[i];
    }

    int prefix_sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        prefix_sum += arr[i];

        int suffix_sum = total_sum - prefix_sum;
        if(suffix_sum == prefix_sum) return true;
    }

    return false;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        int ele; cin >> ele;
        arr.push_back(ele);
    }

    cout << checkPrefixSuffixSum(arr);


    return 0;
}