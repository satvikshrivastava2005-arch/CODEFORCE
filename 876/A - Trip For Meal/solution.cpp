#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if (n == 1) {
        cout << 0 << "
";
        return 0;
    }
    int total_dist = min(a, b);
    total_dist += (n - 2) * min({a, b, c});
    cout << total_dist << "
";
    return 0;
}