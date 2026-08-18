#include <iostream>
using namespace std;
 
void ans(int n) {
    if (n % 3 == 0) {
        cout << n / 3 << " " << n / 3 << "
";
    }
    else if (n % 3 == 1) {
        cout << (n / 3) + 1 << " " << n / 3 << "
";
    }
    else {
        cout << n / 3 << " " << (n / 3) + 1 << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t > 0) {
        cin >> n;
        ans(n);
        t--;
    }
    return 0;
}