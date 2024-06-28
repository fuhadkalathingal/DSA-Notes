#include <bits/stdc++.h>
using namespace std;

int main() {

    int nums[7] = {1, 1, 2, 3, 3, 4, 4};

    int ans = 0;

    for(int i = 0; i < 7; i++) {
        ans ^= nums[i];
    }

    cout << ans;

    return 0;
}