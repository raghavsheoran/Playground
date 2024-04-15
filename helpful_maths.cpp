#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int one=0,two=0,three=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1') one++;
        else if(s[i]=='2') two++;
        else if(s[i]=='3') three++;}
        string res;
        for(int i=0; i<one; i++){res+="1+";}
        for(int i=0; i<two; i++){res+="2+";}
        for(int i=0; i<three; i++){res+="3+";}
        for(int i=0; i<res.length()-1; i++) cout<<res[i];
    
    return 0;
}