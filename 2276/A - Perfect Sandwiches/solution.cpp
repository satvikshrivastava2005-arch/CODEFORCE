#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int a, b;
    cin >> a >> b;
 
    if (a <= b) {
        cout << -1 << "
";
    } else {
        cout << min(b, a - b) << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}