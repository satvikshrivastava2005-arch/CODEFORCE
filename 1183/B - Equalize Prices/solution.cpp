#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    while(q--) {
        int n, k;
        cin >> n >> k;
 
        int mn = INT_MAX;
        int mx = INT_MIN;
 
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            mn = min(mn, x);
            mx = max(mx, x);
        }
 
        if(mx - mn > 2 * k) {
            cout << -1 << endl;
        }
        else {
            cout << mn + k << endl;
        }
    }
 
    return 0;
}