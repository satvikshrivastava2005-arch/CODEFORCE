#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        unordered_map<long long, long long> mp;
 
        long long ans = 0;
 
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
 
            long long key = x - i;
 
            ans += mp[key];
 
            mp[key]++;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}