#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1') count++;
        }
        if(count%2!=0) cout<<"NO";
        else{
            if(count==2){
            for(int i=0; i<n; i++){
            if(s[i]=='1') {
                if(s[i+1]=='1') {cout<<"NO"; break;}
                else{cout<<"YES"; break;}
                }
            }}
            else cout<<"YES";
            
        }
        cout<<endl;
    }
}