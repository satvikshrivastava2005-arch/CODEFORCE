#include<iostream>
#include<cmath>
using namespace std;
int k , w;
 int cost(int k,int w){
        int cost = k*((w*(w+1)/2));
        return cost;
    }
int main(){
    int c,n;
    cin>>k>>n>>w;
    c=cost(k,w);
    int b = c-n;
    if (b<0){cout<<0<<endl;}
    else{cout<< b <<endl;}
}