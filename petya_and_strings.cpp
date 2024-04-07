#include<iostream>
using namespace std;
#include<string>
int main(){
    string s,t;
    cin>>s>>t;
    for(int i=0; i<s.length(); i++){
        if(s[i]<='Z' && s[i]>='A') s[i]=char(int(s[i])+(97-65));
    }
    for(int i=0; i<s.length(); i++){
        if(t[i]<='Z' && t[i]>='A') t[i]=char(int(t[i])+(97-65));
    }
    if(s<t) cout<<-1;
    else if(s>t) cout<<1;
    else cout<<0;

}