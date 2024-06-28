#include <bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    int n = s.size();
    int j = n-1;
    int i = 0;

    while(i < j) {
        while(i < j && !isalpha(s[i])) {
            i++;
        }

        while(i < j && !isalpha(s[j])) {
            j--;
        }

        if(i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    cout << reverseString(s);

    return 0;
}