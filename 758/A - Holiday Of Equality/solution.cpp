#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n ;
     cin>>n ;
     vector<int>a(n);
     for(int i =0 ; i<n; i++){
        cin>>a[i];
    }
     int max_val = *max_element(a.begin(), a.end());
     long long sum = 0;
      for(int i =0 ; i<n; i++){
        sum+=max_val - a[i];
          }   
          cout<<sum<<"
";
          return 0;
 }