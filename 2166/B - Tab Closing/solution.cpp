#include<bits/stdc++.h>
using namespace std;
void len(long long  a , long long  b , long long  n){
    if (a == b || a >= n * b) {
        cout << 1 << "
";
    } else {
        cout << 2 << "
";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, b , a , n ;
    cin>>t;
   while(t--){
    cin>>a>>b>>n;
    len(a,b,n);
   }
}