#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
     cin>>n;
    vector<long long> v(n + 1, 0);
    vector<long long> sorted_v(n + 1, 0);
    vector<long long> pref1(n + 1, 0);
    vector<long long> pref2(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        sorted_v[i] = v[i];
        pref1[i] = pref1[i - 1] + v[i];
    }
    sort(sorted_v.begin() + 1, sorted_v.end());
    for (int i = 1; i <= n; i++){
        pref2[i] = pref2[i - 1] + sorted_v[i];
    }
    int m , type, l, r;
    cin>>m;
    while(m--){
        cin>>type>>l>>r;
        if (type == 1) {
            cout << pref1[r] - pref1[l - 1] << "
";
        } else {
            cout << pref2[r] - pref2[l - 1] << "
";
        }
          }
    }