#include<iostream>
using namespace std;
#include<string>
#include<unordered_set>
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    unordered_set<char> st;
    for(int i=0; i<n; i++){
        if(s[i]>='a' && s[i]<='z') st.insert(s[i]);
        else{st.insert(char(int(s[i])+97-65));}

    }
    if(st.size()==26) cout<<"YES";
    else cout<<"NO";
    return 0;


}