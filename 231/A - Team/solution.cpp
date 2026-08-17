#include<iostream>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n , a , b , c , z = 0  ;
    cin>>n ;
    for(int i=0 ; i<n;i++){
        cin >> a >> b >> c ;
     if ( a+b+c >=2){
        z++;
     }
    }
    cout << z << endl ; 
    return 0 ;  
}