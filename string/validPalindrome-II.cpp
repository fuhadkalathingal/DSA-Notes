#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j) {
    while(i < j) {
        if(s[i] == s[j]) {
            i++;
            j--;
        }else{
            return false;
        }
    }

    return true;
}

bool validPalindrome(string s) {
    int j = s.size() - 1;
    int i = 0;

    while(i < j) {
        if(s[i] != s[j]) {
            if(isPalindrome(s, i, j-1) || isPalindrome(s, i+1, j)) {
                return true;
            }else return false;
        }else{
            i++;
            j--;
        }
    }

    return true;
}

int main() {

    string s;
    cin >> s;

    if(validPalindrome(s)) cout << "true";
    else cout << "false";

}