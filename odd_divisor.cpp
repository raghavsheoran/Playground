#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n;
        cin>>n;
        long long a=1;;
        while(n>a) a=a<<1;
        if(a==n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}