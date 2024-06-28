#include <bits/stdc++.h>
using namespace std;

int main() {

    string first_name, secound_name;
    cin >> first_name;
    cin >> secound_name;

    //first_name += secound_name;
    string full_name = first_name + " " + secound_name;
    cout << full_name;

    return 0;
}