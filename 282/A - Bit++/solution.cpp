#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int x=0,n;
    string s;
    cin>>n;
    for (int a =0; a<n ;a++){
        cin>>s;
    
       if(s[1]=='+'){x++;}
       else{x--;}
   
    }cout<<x<<endl;
return 0;}