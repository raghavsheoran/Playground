#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1; i<1000; i++){
        a=3*a;
        b=2*b;
        if(a>b){cout<<i; return 0;}
    }
    return 0;
}
