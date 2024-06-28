#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {5, 4, 1, 2, 3};

    for(int i = 1; i < arr.size(); i++) {
        arr[i] = arr[i-1] + arr[i];
    }

    for(auto i : arr) {
        cout << i << " ";
    }

    return 0;
}