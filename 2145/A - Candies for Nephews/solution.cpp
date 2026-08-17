#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    for(int i=0; i<t;i++){
        cin>>n;
        if(n%3==0){
            cout<<0<<endl;
        }
        else{
            cout<<(3-(n%3))<<endl;
        }
    }
    return 0; 
}