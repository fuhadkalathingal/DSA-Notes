#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    vector<int> v1(128, -1);
    vector<int> v2(128, -1);

    if(s.size() != t.size()) return false;

    for(int i = 0; i < s.size(); i++) {
        if(v1[s[i]] != v2[t[i]]) return false;
        v1[s[i]] = v2[t[i]] = i;
    }

    return true;
}

int main() {

    string s, t;
    cin >> s >> t;

    if(isIsomorphic(s, t)) {
        cout << "strings are isomorphic";
    }else{
        cout << "strings are not isomorphic";
    }

    return 0;
}