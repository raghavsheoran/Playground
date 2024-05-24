#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    int x,y,n;
    cin>>x>>y>>n;
    int rem=n%x;
    if(n-rem+y<=n) cout<<n-rem+y<<endl;
    else cout<<n-rem-x+y<<endl;
    }
}