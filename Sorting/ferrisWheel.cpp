#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int s = 0, e = n-1;

    int count = 0;
    int sum = 0;
    while(s <= e) {
        count++;
        if(arr[s] + arr[e] <= x) {
            s++;
            e--;
        }else{
            e--;
        }
    }

    cout << count;

    return 0;
}