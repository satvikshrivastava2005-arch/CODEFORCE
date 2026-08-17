#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    int sp= (n + s - 1) / s;
    int total_sheet=sp*k;
    int total_pack=(total_sheet + p - 1) / p;
cout<<total_pack<<endl;
return 0; 
 
}