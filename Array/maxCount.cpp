#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, n;
    cin >> n;

    vector<int> count(10001, 0);

    for(int i = 0; i < n; i++) {
        cin >> a;
        count[a]++;
    }

    int max_count(0);
    int max_value(0);

    for(int i  = 0; i < 10001; i++) {
        if(max_count < count[i] || (max_count == count[i] && max_value > i)) {
            max_count = count[i];
            max_value = i;
        }
    }

    cout << max_value << " " << max_count;

    return 0;
}