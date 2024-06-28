#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int t = 5;
    vector<int> arr = {4, 1, 2, 3, 1};
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        int a = arr[i];
        int rem = t - a;

        if(mpp.find(rem) != mpp.end()) {
            cout << "Yes";
        }
        mpp[a] = i;
    }

    cout << "no";

    return 0;
}