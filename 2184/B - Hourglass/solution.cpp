#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long s, k, m;
    cin >> s >> k >> m;
 
    if (s <= k) {
        cout << max(0LL, s - m % k) << '
';
    } 
    else {
        long long rem = m % (2 * k);
 
        if (rem < k)
            cout << s - rem << '
';
        else
            cout << 2 * k - rem << '
';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) solve();
 
    return 0;
}