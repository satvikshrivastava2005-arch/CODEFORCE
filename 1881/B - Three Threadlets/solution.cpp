#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a , b , c ;
    cin>>a>>b>>c;
    long long m = min ({a, b, c} );
    if(a%m!=0 || b%m!=0 || c%m!=0){
        cout<<"NO"<<"
";
        return ;
    }
    long long n = (a/m-1)+(c/m-1) +(b/m-1);
    if(n<=3){
        cout<<"YES
";
    }else{
        cout<<"NO
";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int t ; 
      cin>> t;
      while( t--){
        solve();
      }return 0 ;
}