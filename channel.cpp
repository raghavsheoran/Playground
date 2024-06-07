#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,o,m;
        cin>>n>>o>>m;
        string s;
        cin>>s;
        int max_unique=o;
        bool all=false;
        bool maybe=false;
        for(int j=0; j<m; j++){
        if(o==n){all=true; break;}
        if(max_unique>=n){maybe=true;}
        if(s[j]=='+'){o++; max_unique++;}
        else{o--; }
        if(max_unique>=n){maybe=true;}
        if(o==n){all=true; break;}


        }
        if(all) cout<<"YES"<<endl;
        else if(maybe) cout<<"MAYBE"<<endl;
        else cout<<"NO"<<endl;
    }
}