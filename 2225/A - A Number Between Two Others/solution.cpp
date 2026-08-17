#include<iostream>
#include<cmath>
using namespace std;
int  main(){
long long t , x , y , z ;
cin>>t;
while(t--){
    cin>>x>>y;
    z=x*2;
    if((x<z)&&(z<y)&& (z%x==0) && (z%y!=0 )){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0 ;
}