#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, int n, string s) {
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return isPalindrome(i+1, n, s);
}

int main() {
    string s;
    cin >> s;

    int n = s.size();

    cout << isPalindrome(0, n, s);

    return 0;
}