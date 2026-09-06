#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int c1=0;
    int c0=0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '1') {
            c1++;
            c0 = 0; 
        } else{
            c0++;
            c1= 0;}
        if (c1 >= 7 || c0 >= 7) {
         cout << "YES
";
         return 0; 
        }
    }
    cout << "NO
";
    return 0;
}