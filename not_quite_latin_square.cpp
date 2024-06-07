#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string c;
        for(int j=0; j<3; j++){
            string s;
            cin>>s;
            for(int k=0; k<3; k++){
                if(s[k]=='?') c=s;
            }
        }
        int aa=0,bb=0,cc=0;
        for(int i=0; i<3; i++){
            if(c[i]=='A') aa++;
            else if(c[i]=='B') bb++;
            else if(c[i]=='C') cc++;
        }
        if(aa==0) cout<<'A'<<endl;
        else if(bb==0) cout<<'B'<<endl;
        else cout<<'C' <<endl;

    }
    return 0;
}