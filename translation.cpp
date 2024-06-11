#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    int l=0;
    int r=t.length()-1;
    while(l<r) {swap(t[l],t[r]); l++; r--;}
    if(s==t) cout<<"YES";
    else cout<<"NO";

}