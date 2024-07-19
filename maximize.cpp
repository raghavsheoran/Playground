#include<iostream>
using namespace std;
#include<algorithm>
int gcd(int x, int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        int res=0;
        int ans;
        for(int i=1; i<x; i++){
            if(i+gcd(i,x)>res) {ans=i; res=i+gcd(i,x);}
        }
        cout<<ans<<endl;
    }
    return 0;

}