#include <bits/stdc++.h>
using namespace std;

int countAsterisk(string s) {
    int brace = 0;
    int n = s.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '|' && brace == 0) brace = 1;
        else if(s[i] == '*' && brace == 0) ans++;
        else if(s[i] == '|' && brace == 1) brace = 0;
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << countAsterisk(s);

    return 0;
}