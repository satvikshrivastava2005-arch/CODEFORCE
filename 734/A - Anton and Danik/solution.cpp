#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 int n;
 char i ; 
 cin>>n;
 multiset<char> m;
 while(n--){
    cin>>i;
    m.insert(i);
 }
 if(m.count('A')==m.count('D')) {
    cout<<"Friendship";
 }
 else if ( m.count('A')>m.count('D')){
       cout<<"Anton";
 }
 else{
    cout<<"Danik";
 }
    return 0;
}