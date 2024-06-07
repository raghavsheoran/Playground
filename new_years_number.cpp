#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n;
        cin>>n;
        long long extra=n%2020;
        n=n-(2021*extra);
        if(n<0 || n%2020 !=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}