#include <bits\stdc++.h>
using namespace std;
void solve() {
    long long n;
    cin >> n;
    int count2 = 0, count3 = 0;
    while (n % 2 == 0) {
        count2++;
        n /= 2;
    }
    while (n % 3 == 0) {
        count3++;
        n /= 3;
    }
    if (n != 1 || count2 > count3) {
        cout << -1 << "
";
    } else {
         cout << (2 * count3 - count2) << "
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