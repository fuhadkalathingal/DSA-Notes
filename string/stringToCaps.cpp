#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for(int i = 0; i < str.size(); i++) {
        if(str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }

    cout << str;

    return 0;
}