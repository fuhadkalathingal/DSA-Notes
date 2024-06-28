#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    string max_str;
    int max_freq = 0;

    for(int i = 0; i < n-1; i++) {
        int current_freq = 0;
        for(int j = 0; j < n-1; j++) {
            if(s[i] == s[j] && s[i+1] == s[j+1]) {
                current_freq++;
            }
        }

        if(max_freq < current_freq) {
            max_freq = current_freq;
            max_str.clear();
            max_str.push_back(s[i]);
            max_str.push_back(s[i+1]);
        }
    }

    cout << max_str << endl;

    return 0;
}