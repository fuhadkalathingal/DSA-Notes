#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(nums[i] == nums[j]) {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;

}