#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    for(int i = 0; i < a.size(); i++) {
        if(a[i] < b[i]) {
            cout << "-1" << endl;
            return 0;
        }
        if(a[i] > b[i]) {
            cout << "1" << endl;
            return 0;
        }
    }

    cout << "0" << endl;
    return 0;
}