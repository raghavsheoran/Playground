#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    cin>>s;
    long long n=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='4'|| s[i]=='7') n++;
    }
    int possible=true;
    s=to_string(n);
    for(int i=0; i<s.length(); i++){
        if(s[i]!='4'&& s[i]!='7') possible=false;
    }
    if(possible) cout<<"YES";
    else cout<<"NO";
    return 0;
}