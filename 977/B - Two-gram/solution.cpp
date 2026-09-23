#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;
    string s ;
     cin>>s;
    map<string, int> freq;
 
    for (int i = 0; i <= n - 2; i++) {
        string window = s.substr(i, 2);
        freq[window]++;
    }
 
    string ans;
    int maxi = 0;
 
    for (auto x : freq) {
        if (x.second > maxi) {
            maxi = x.second;
            ans = x.first;
        }
    }
    cout << ans << endl;
 
}