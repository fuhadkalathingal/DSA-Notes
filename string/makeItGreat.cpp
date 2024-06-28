#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    bool isBad = true;
    int n = s.size();
    while(isBad) {
        isBad = false;
        for(int i = 0; i < n-1; i++) {
            if(abs(s[i] - s[i+1]) == 32) { 
                s.erase(i, 2);
                isBad = true;
            }
        }
    }
    
    cout << s;

    return 0;
}