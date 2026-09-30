#include<bits/stdc++.h>
using namespace std;
void solve(long long  n ){
    long long total_sum = n * (n + 1) / 2;
    long long power_sum = 0;
    long long p = 1;
    while (p <= n) {
        power_sum += p;
        p *= 2;
    }
    cout<<total_sum - 2*power_sum<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  t , n ;
    cin>>t;
    while(t--){
        cin>>n;
        solve(n);
 
    }
    return 0;
}