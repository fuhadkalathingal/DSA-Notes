#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int j = 0;
    for(int i = 0; i < n; i++) {
        j = i;
        while(j > 0 && arr[j] < arr[j-1]) {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    for(auto i : arr) {
        cout << i << " ";
    }

    return 0;
}