#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,a1 ,b,b1 ;
    cin>>a>>b;
    for(int i=0; i<a.length();i++){
        a[i]= toupper(a[i]);
    }
    for(int i=0; i<b.length();i++){
        b[i]= toupper(b[i]);}
    if(a<b){
        cout<<-1;}
    else if(a==b){
        cout<<0; }
    else{
        cout<<1;
    }
    }
    