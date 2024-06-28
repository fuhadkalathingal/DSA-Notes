#include <bits/stdc++.h>
using namespace std;

void toLower(string s) {
    int n  = s.size();
     for(int i = 0; i < n; i++) {
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32;
        }
    }
    cout << s;
}

int main() {
    string s;
    cin >> s;

    toLower(s);

    return 0;
}