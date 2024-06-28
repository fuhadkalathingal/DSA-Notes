#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int j = str.size()-1;
    int flag = 0;
    for(int i = 0; i < str.size()/2; i++) {
        if(str[i] != str[j]) {
            flag = 1;
            break;
        }
        j--;
    }

    if(flag == 0) {
        cout << "palindrome";
    }else{
        cout << "not palindrome";
    }

    return 0;
}