#include<iostream>
using namespace std;
#include<unordered_set>
#include<string>
int main(){
    int n;
    cin>>n;
    for(int i=n+1; i<=1000000; i++){
        unordered_set<char> st;
        string s=to_string(i);
        for(int i=0; i<s.size(); i++) st.insert(s[i]);
        if(st.size()==4){cout<<i; break;}
    }
    return 0;
}