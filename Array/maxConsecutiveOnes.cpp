#include <bits/stdc++.h>
using namespace std;

int main() {

    int nums[9] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int max_ones = 0;
    int count = 0;

    for(int i = 0; i < 9; i++) {
        if(nums[i] == 1) {
            count++;
            max_ones = max(max_ones, count);
        }else{
            count = 0;
        }
    }

    cout << max_ones;

    return 0;
}