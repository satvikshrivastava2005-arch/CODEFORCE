#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n, k;
    cin >> n >> k;
    long long odd_count = (n + 1)/2;
    if (k <= odd_count) {
        cout << 2 * k - 1 << "
";
    } else {
        cout << 2 * (k - odd_count) << "
";
    }
    return 0;
}