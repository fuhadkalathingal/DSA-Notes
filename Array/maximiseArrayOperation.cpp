#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;

    // initialize ans with invalid value because we will be taking min of x[i]
    int ans = INT_MAX;

    for(int i=0 ; i<n ; i++) {
        int currNum; cin>>currNum;
        int currX = 0;

        // Inner loop to calculate currX
        while(currNum%2==0) {
            currNum /= 2;
            currX++;
        }

        //Update ans by taking min
        ans = min(ans, currX);
    }

    cout<<ans<<endl;
    return 0;
}