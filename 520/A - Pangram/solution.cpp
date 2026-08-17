#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n >>s;
    for(int i =0; i<s.length(); i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]= tolower(s[i]);
        }
        else{
            s[i]=s[i];
        }
    }
    int freq[26]={0};
    for(int j =0 ; j<s.length(); j++){
         freq[s[j]-'a']++;}
bool pangram=true;
for(int k =0; k<26 ; k++){
    if(freq[k]==0){
        pangram=false;
        break;
    }
}
    
    if(pangram){
        cout<<"YES"<<endl;
 
    }
    else{
        cout<<"NO"<<endl;
    }
}