#include<iostream>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    long long n, k;
 
    for(int x = 0; x < t; x++){
        cin >> n >> k;
 
        long long first = n - k + 1;
 
        long long odd = (n + 1) / 2 - (first / 2);
 
        if(odd % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}