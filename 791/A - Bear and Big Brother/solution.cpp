#include<iostream>
using namespace std;
int countyears(int a , int b){
    if(a>b) return 0 ;
    return 1+countyears(a*3 , b*2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a , b;
    cin>>a>>b;
    cout<<countyears(a,b);
    return 0;
}