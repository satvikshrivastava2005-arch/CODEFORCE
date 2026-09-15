#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ; 
    cin>>n;
    string s , target= "Timru";
    cin>>s;
    sort(s.begin(), s.end());
     if (s == target) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
    }
int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
}