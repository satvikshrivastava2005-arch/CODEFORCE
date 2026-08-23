#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, a;
    cin >> n;
    int ans = INT_MAX;
    while (n--) {
        cin >> a;
        ans = min(ans, abs(a));
    }
    cout << ans << "
";
    return 0;
}