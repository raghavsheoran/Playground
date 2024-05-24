#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    bool possible=false;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1'){b=0; a++;}
        else {a=0; b++;}
        if(a>=7||b>=7) possible=true;

    }
    if(possible) cout<<"YES";
    else cout<<"NO";
}