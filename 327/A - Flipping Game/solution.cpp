#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int initial_ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            initial_ones++;
        }
    }
    int current_gain = 0;
    int max_gain = -1;
    for (int i = 0; i < n; i++) {
        int val = (a[i] == 0) ? 1 : -1;
        current_gain = max(val, current_gain + val);
        max_gain = max(max_gain, current_gain);
    }
    cout << initial_ones + max_gain << "
";
 
    return 0;
}