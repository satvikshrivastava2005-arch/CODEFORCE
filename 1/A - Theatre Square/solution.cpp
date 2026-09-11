#include<bits/stdc++.h>
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     long long n , m ,a ;
     cin>>n>>m>>a;
    long long len = (n+a-1)/a;
    long long wid = (m+a-1)/a;
    cout<<len*wid<<"
";
     return 0 ;
}