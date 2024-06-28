#include <bits/stdc++.h>
using namespace std;

int main() {

    // string a;
    // getline(cin, a);
    // cout << a;

    string input;
    string line;

    while(true) {
        getline(cin, line);
        if(line == "stop") break;
        input += line;
        input += "\n";
    }

    cout << input;

    return 0;
}