#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int coins[n];
    int sum= 0;
    for(int i =0; i<n;i++){
        cin>>coins[i];
        sum+=coins[i];
}
int sum1=0,sum2=0,count=0;
sort(coins,coins+n);
for(int m =n-1;m>=0;m--){
      
      if(sum1>sum2){break;}
      else{
        sum1+=coins[m];
        sum2=sum-sum1;
      count++;}
}
cout<<count<<endl;
return 0;
}