#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        int x = 1;
 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
 
            if (a == x) {
                x++;
            }
        }
 
        cout << (n - x + k) / k << endl;
    }
 
    return 0;
}