#include<iostream>
using namespace std;
#include<map>
#include<string>
int main(){
    string s;
    cin>>s;
    long long balance=0;
    map<long long,string> mp;
    for(int i=0; i<int(s.length()); i++){
        mp[balance].push_back(s[i]);
        if(s[i]=='(') balance++;
        else balance--;
    }
    for(auto it=mp.begin(); it!=mp.end(); it++){
        string r=it->second;
        for(int i=r.length()-1; i>=0; i--) cout<<r[i];
        
    }
    return 0;


}