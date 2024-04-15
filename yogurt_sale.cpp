#include<iostream>
using namespace std;
#include<utility>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n,a,b;
        cin>>n>>a>>b;
        long long res;
        res=min(n*a,(n/2)*b+(n%2)*a);
        cout<<res<<endl;
    }
}