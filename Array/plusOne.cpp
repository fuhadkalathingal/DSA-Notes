#include <bits/stdc++.h>
using namespace std;

vector<int> increment(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] < 9) {
            arr[i]++;
            return arr;
        }else{
            arr[i] = 0;
        }
    }

    arr.insert(arr.begin(), 1);
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    increment(arr);

    for(auto i : arr) {
        cout << i << " ";
    }

    return 0;
}