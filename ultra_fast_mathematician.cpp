#include<iostream>
using namespace std;
#include<string>
int main(){
    string s,t;
    cin>>s>>t;
    for(int i=0; i<s.length(); i++){
        if(s[i]==t[i]) cout<<'0';
        else cout<<'1';
    }
    return 0;
}