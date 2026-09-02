#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n , x;
    cin>>n;
    double ans=0 ;
    int count=n;
    
    while(count--){
        cin>>x;
        ans+=x;
    }
    cout<<ans/n<<"
";
    return 0; 
}