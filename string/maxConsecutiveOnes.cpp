#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "0001101011";

    int k = 2;

    int start = 0, end = 0, zero_count = 0, max_length = 0;

    while(end < s.size()) {
        if(s[end] == '0') zero_count++;

        while(zero_count > k) {
            if(s[start] == '0') zero_count--;
            start++;
        }

        max_length = max(max_length, (end-start)+1);
        end++;
    }

    cout << max_length;

    return 0;
}