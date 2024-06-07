#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        bool possible=true;
        int closing_question=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]==')' || s[i]=='?') closing_question++;
        }
        int opening_minus_closing=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                opening_minus_closing++;
            }
            else if(s[i]==')'){
                opening_minus_closing--;
                closing_question--;
            }
            else{ // a question mark
            closing_question--; // since we want the ones on left
            // preference for open bracket
            if(closing_question>=opening_minus_closing+1){ // lets add it
            opening_minus_closing++;
            }
            else{ // lets add closing bracket
            opening_minus_closing--;
            }
            }
            if(opening_minus_closing<0) {possible=false; break;}
        }
        if(possible && opening_minus_closing==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}