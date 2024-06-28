#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string str;
    for(int i = 0; i < s.size(); i++) {
        if((s[i] >= 48 && s[i] <= 57) || (s[i] >= 97 && s[i] <= 121)) {
            str += s[i];
        }
    }

    string revStr = str;
    reverse(revStr.begin(), revStr.end());

    if(revStr == str) {
        return true;
    }else{
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    string input[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    for(int i = 0; i < n; i++) {
        if(isPalindrome(input[i])) {
            cout << i << " is a palindrome" << endl;
        }else{
            cout << i << " not a palindrome" << endl;
        }
    }
    
    return 0;

}