#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        bool possible=false;
        for(int i=0; i<n; i++){
            if(a[i]==b[i] && a[i]!=c[i]){possible=true;}
            else if(a[i]!=b[i] && a[i]!=c[i] && b[i]!=c[i]){possible=true;}

        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}