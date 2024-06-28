#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    int freq[26] = {0};

    for(int i = 0; i < str.size(); i++) {
        freq[str[i] - 'a']++;
    }

    int max = 0;
    char ch;
    for(int i = 0; i < 26; i++) {
        if(max < freq[i]){
            max = freq[i];
            ch = 'a' + i;
        }
    }

    cout << ch << " : " << max;

    return 0;
}