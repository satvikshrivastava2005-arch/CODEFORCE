#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    set<char> distinct;
    for(char c :s){
        if(c>='a'&& c<='z'){
            distinct.insert(c);
        }
        
    }
    cout<<distinct.size();
    return 0;
 }