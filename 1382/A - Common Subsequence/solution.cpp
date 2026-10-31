#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<int> a(n), b(m);
 
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
 
        set<int> s(a.begin(), a.end());
 
        int ans = -1;
 
        for (int x : b) {
            if (s.count(x)) {
                ans = x;
                break;
            }
        }
 
        if (ans != -1) {
            cout << "YES
1 " << ans << "
";
        } 
        else {
            cout << "NO
";
        }
    }
 
    return 0;
}