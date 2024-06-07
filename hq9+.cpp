#include<iostream>
using namespace std;
#include<string>
#include<unordered_set>
int main(){
    string s;
    cin>>s;
    unordered_set<char> st;
    st.insert('H');
    st.insert('Q');
    st.insert('9');
    bool possible=false;
    for(int i=0; i<s.length(); i++){
        if(st.find(s[i])!=st.end()) {possible=true; break;}
        }
    if(possible) cout<<"YES";
    else cout<<"NO";
    return 0;

}