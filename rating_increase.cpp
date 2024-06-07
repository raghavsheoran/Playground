#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        bool possible=false;
        for(int j=1; j<s.length(); j++){
            if(s[j]=='0') continue;
            else{
                if(stoi(s.substr(0,j))<stoi(s.substr(j,s.length()-1-j+1))) {
                    possible=true; cout<<s.substr(0,j)<<" "<<s.substr(j,s.length()-1-j+1);
                    break;
                }
            }
            
        }
        if(!possible) cout<<-1;
        cout<<endl;
    }

}