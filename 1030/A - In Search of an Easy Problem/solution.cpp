#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100],s=0;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s>0){
        cout<<"HARD"<<endl;
 
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
 
}