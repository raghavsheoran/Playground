#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m,n;
        cin>>m>>n;
        string s,t;
        cin>>s>>t;
        int res=0;
        int j=0;
        for(int i=0; i<m; i++){
            char c=s[i];
            while(j<n){
                if(t[j]==c){res++; j++; break;}
                else j++;
            }
            if(j==n) break;
        }
        cout<<res<<endl;
    }
    return 0;
}