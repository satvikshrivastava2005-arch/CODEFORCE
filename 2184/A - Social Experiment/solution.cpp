#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long n;
    cin>>n;
    if (n<=3){
        cout<<n<<"
";
    } else {
        cout<<(n%2)<<"
";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}