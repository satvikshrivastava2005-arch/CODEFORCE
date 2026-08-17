#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , h, a, num=0;
    cin>>n>>h;
 
    for(int i=0; i<n;i++){
        cin>>a;
        if(a<=h){
            num=num+1;
        }
        else{
            num=num+2;
        }
    }
    cout<< num << endl;
}