#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        bool p=false;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=s[0]){swap(s[i],s[0]); p=true; break;}
        }
        if(p) {
            cout<<"YES"<<endl;
            cout<<s<<endl;
            }
        else cout<<"NO"<<endl;
    }
}