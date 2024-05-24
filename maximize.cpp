#include<iostream>
using namespace std;
#include<algorithm>
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(a-b,b);
    else return gcd(a,b-a);
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        int res=0;
        int ans;
        for(int i=0; i<x; i++){
            if(i+gcd(i,x)>res) {ans=i; res=i+gcd(i,x);}
        }
        cout<<ans<<endl;
    }
    return 0;

}