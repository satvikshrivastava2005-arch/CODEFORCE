#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
       if (a % b == 0) {
            cout << 0 << "
";
        } else {
            cout << b - (a % b) << "
";
        }
       
    }
    return 0;
}