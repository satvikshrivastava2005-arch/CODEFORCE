#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; 
    cin>>n;
    string odd= "I hate ";
    string even = "I love ";
    string mid ="that ";
    string end = "it";
    string ans ="" ;
    for(int i =1 ; i<=n; i++){
        if(i%2!=0 ){
           ans = ans+odd;
        }
        else {
            ans=ans+even;
        }
        if(i==n){
            ans+=end;
        }
        else{
            ans+=mid;
        }
    }
    cout<< ans << endl;
    return 0;
}