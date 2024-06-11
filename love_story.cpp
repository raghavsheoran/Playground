#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    string c="codeforces";
    for(int i=0; i<t; i++){
        int res=0;
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=c[i]) res++;
        }
        cout<<res<<endl;

    }
}