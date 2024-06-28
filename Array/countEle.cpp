#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[5] = {1, 3, 4, 1, 3};    
    int hash[13] = {0};

    map<int, int> mpp;
    for(int i = 0; i < 5; i++) {
        mpp[arr[i]]++;
    }
    
    int t;
    cin >> t;
    while(t--) {
        int number;
        cin >> number;
        cout << mpp[number] << endl;

    }

    return 0;
}