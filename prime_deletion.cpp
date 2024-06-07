#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1') {cout<<17<<endl; break;}
            if(s[i]=='7') {cout<<71<<endl; break;}
        }
    }
    return 0;

}