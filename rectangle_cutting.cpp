#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m,n;
        cin>>m>>n;
        bool possible=true;
        if(m%2!=0 && n%2!=0) possible=false; // both are odd
        else if(m%2==0 && n%2==0) possible=true;
        else if(m%2==0 && m/2==n) possible=false;
        else if(n%2==0 && n/2==m) possible=false;
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    return 0;
}