#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int n ;
    cin>>n;
 
 
 map<string,int> counts;
for (int i =0;i<n; i++){
    string name;
    cin>>name;
 
if(counts.count(name)==0){
cout<<"OK"<<endl;
counts[name]=1;
}
  else{
  
    cout<<name<<counts[name]<<endl;
    counts[name]++;
  }}
  return 0 ;
}