#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        if (n >= m && (n - m) % 2 == 0) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    return 0;
}