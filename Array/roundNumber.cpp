#include <bits/stdc++.h>
using namespace std;

int main() {
    int grades[6] = {49, 56, 63, 73, 27, 86};
    for(int i = 0; i < 6; i++) {
        int next_multiple = ((grades[i]/5)+1)*5;
        cout << next_multiple << endl;
    }

    return 0;
}