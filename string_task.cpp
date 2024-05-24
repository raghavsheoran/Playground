#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<unordered_set>
int main(){
    vector<char> vowel={'a','e','i','o','u','y','A','E','I','O','U','Y'};
    unordered_set<char> st(vowel.begin(),vowel.end());
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(st.find(s[i])==st.end()){
            cout<<'.';
            if(s[i]>='A' && s[i]<='Z'){
                cout<<char(int(s[i])-65+97);
            }
            else cout<<s[i];

        }
    }


}