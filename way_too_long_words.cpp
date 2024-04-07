#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        if(s.length()<=10) cout<<s;
        else cout<<s[0]<<to_string(s.length()-2)<<s[s.length()-1];
        cout<<endl;

    }
    return 0;
}