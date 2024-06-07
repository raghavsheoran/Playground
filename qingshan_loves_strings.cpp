#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m,n;
        cin>>m>>n;
        string s,t;
        cin>>s>>t;
        bool possible=true;
        bool is_t_good=true;
        for(int i=1; i<t.length(); i++){if(t[i]==t[i-1]) {is_t_good=false; break;}}
        for(int i=1; i<s.length(); i++){
            if(s[i]==s[i-1]){
                if(!is_t_good){possible=false; break;}
                if(s[i]==t[t.length()-1] || s[i-1]==t[0]){possible=false; break;}
            }
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}