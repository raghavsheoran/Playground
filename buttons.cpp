#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2!=0) b--;
        if(a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}