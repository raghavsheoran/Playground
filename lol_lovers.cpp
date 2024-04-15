#include<iostream>
using namespace std;
#include<string>
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0,o=0;
    for(int i=0; i<n; i++){
        if(s[i]=='L') l++;
        else o++;
    }
    int l_a=0,l_b=l,o_a=0,o_b=o;
    for(int i=0; i<n; i++){
        if(s[i]=='L'){l_a++; l_b--;}
        else {o_a++; o_b--;}
        if(l_a+o_a>0 && o_b+l_b>0 && l_a!=l_b && o_a!=o_b) {cout<<o_a+l_a; return 0;}

    }
    cout<<-1;
    return 0;
}