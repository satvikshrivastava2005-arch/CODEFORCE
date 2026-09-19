#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    if(x > 45){
        cout << -1 << "
";
        return;
    }
    string result="";
    int current_digit = 9;
    while (x > 0){
        if (x >= current_digit) {
            result+=to_string(current_digit);
            x-=current_digit;
        } else{
            result += to_string(x);
            x = 0;
        }
        current_digit--;
    }
    reverse(result.begin(), result.end());
    cout << result << "
";}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve(); }
 
    return 0;
}