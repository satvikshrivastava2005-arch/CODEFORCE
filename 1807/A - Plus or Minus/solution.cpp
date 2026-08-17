#include<iostream>
using namespace std;
void sol(int a , int b, int c){
    if(a+b==c){
        cout<<"+"<<endl;
    }
    else{
        cout<<"-"<<endl;
    }
}
int main(){
    int t,a,b,c;
    cin>>t;
    for(int i =0 ; i<t;i++){
        cin>>a>>b>>c;
       sol(a,b,c);
    }
    return 0;
}