#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    set<char> name;
string z;
    cin>>z;
    for(char c : z ){
        name.insert(c);
    }
    if(name.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!" <<endl;
 
    }
 
    return 0;
}