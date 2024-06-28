#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "abcdabefc";
    map<char, int> mpp;
    for(int i = 0; i <= s.size(); i++) {
        mpp[s[i]]++;
    }

    int t;
    cin >> t;
    while(t--) {
        char ch;
        cin >> ch;

        cout << mpp[ch] << endl;
    }   

    return 0;
}