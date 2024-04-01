#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long a,b,m;
        cin>>a>>b>>m;
        long long x,y;
        x=m/a+1;
        y=m/b+1;
        cout<<x+y<<endl;
    }
    return 0;
}