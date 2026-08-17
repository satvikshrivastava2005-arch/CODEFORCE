#include<iostream>
using namespace std;
int steps(int x){
    int steps=x/5;
    if (x%5!=0){
        steps++;
        
    }return steps;
}
int main(){
int x;
cin>>x;
cout<<steps(x);
}