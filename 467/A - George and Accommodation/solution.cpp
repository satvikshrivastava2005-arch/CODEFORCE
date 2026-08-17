#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,p,q;
    cin>>n;
int step=0;
    for(int i=0; i<n;i++){
       cin>>p>>q;
       if(q-p>=2){
         step++;
       }
 
    }
    cout<<step<<endl;
}