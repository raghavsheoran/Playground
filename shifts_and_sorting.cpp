#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        int one=0;
        long long res=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1') one++;
            else {
                if(one>0)res+=one+1;}

        }
        cout<<res<<endl;
    }
    return 0;

}