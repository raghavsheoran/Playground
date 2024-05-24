#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        int l=0,r=0;
        for(int i=0; i<3; i++){
            l+=stoi(to_string(s[i]));
        }
        for(int i=3; i<6; i++){
            r+=stoi(to_string(s[i]));
        }
        if(l==r) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}