#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int matrix[5][5];
    for(int i= 0; i<5;i++){
        for(int j =0; j<5;j++){
            cin>>matrix[i][j];
        }
    }
    int n=1, dis;
    for(int i= 0; i<5;i++){
        for(int j =0; j<5;j++){
            if( n==matrix[i][j]){
                 dis=abs(i-2)+abs(j-2);
                 cout<<dis;
              } 
        }}
}