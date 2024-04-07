#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        int a=0;
        for(int i=0; i<5; i++){
            if(s[i]=='A') a++;
            

        }
        if(a>=3) cout<<'A';
        else cout<<'B';
        cout<<endl;
        
    }
    return 0;
}