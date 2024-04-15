#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        int res=0;
        bool bb=false;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='B') {b++; bb=true;}
            else {
            if(a==0) {res+=b;}
            else if(bb) {res+=(b+1);}
            b=0; 
            a++;}

        }
        cout<<res<<endl;
    }
}