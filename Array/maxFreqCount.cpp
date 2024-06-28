#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, nums;
    cin >> n;
    int max_freq(0);

    vector<int> freq(101, 0);

    for(int i = 0; i < n; i++) {
        cin >> nums;
        freq[nums]++;
        max_freq = max(max_freq, freq[nums]);
    }


    int count = 0;

    for(int i = 0; i <= 100; i++) {
        if(max_freq == freq[i]) count++;
    }

    cout << max_freq * count;

    return 0;
}