#include<iostream>
using namespace std;
bool hasDistinctDigits(int year){
        int a = year/1000;
        int b =(year/100)%10;
        int c = (year/10)%10;
        int d= year%10;
       return (a != b && a != c && a != d && b != c && b != d && c != d);
};
int main(){
    int y;
    cin>>y;
   while(true){
    y++;
      if(  hasDistinctDigits(y)){
         cout<<y<<endl;
         break;
      }
     }
return 0;
}