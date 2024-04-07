#include <iostream>
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
        int f=INT_MAX,l=INT_MAX;
        for(int i=0; i<n; i++){
            if(s[i]=='B') {f=i; break;}
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]=='B') {l=i; break;}
        }
        if(f==INT_MAX) cout<<0<<endl;
        else cout<<l-f+1<<endl;

    }
    return 0;
    
}