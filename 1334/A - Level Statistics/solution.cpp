#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int prev_p= 0, prev_c = 0;
    bool valid = true;
    for (int i = 0; i < n; ++i){
        int p, c;
        cin >> p >> c;
        if (p < prev_p || c < prev_c || c > p || (c - prev_c) > (p - prev_p)) {
            valid = false;
        }
        prev_p = p;
        prev_c = c;
    }
    if (valid){
        cout << "YES
";
    } else{
        cout << "NO
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