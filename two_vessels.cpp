#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        double a,b,c;
        cin>>a>>b>>c;
        double diff=abs(a-b);
        double res=diff/c; 
        if(diff%c!=0) res++;
        cout<<res<<endl;

    }
}