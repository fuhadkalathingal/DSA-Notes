#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    string s = to_string(a);
    int first = s[0] - '0';
    int last = s.back() - '0';

    cout << first+last;

    return 0;
}