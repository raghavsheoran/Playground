#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s,f;
        cin>>s;
        cin>>f;
        int r=0,e=0;
        for(int i=0; i<n; i++){
            if(f[i]=='1'){
                if(s[i]!='1'){r++;}
            }
            else if(s[i]=='1'){
                e++;
            }
        }
        if(r>e){
            cout<<r<<endl;

        }
        else if(r<e){
            cout<<e<<endl;

        }
        else{
            cout<<r<<endl;

        }
    }
}