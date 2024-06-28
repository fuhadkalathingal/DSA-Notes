#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max_ele = INT_MIN;
    int min_ele = INT_MAX;
    int max_index;
    int min_index;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a> max_ele) {
            max_index = i+1;
            max_ele = a;
        }

        if(a < min_ele) {
            min_index = i+1;
            min_ele = a;
        }
    }

    cout << min_index << " " << max_index;


}