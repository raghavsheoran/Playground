#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string x,y;
        cin>>x>>y;
        bool f=true;
        for(int i=0; i<x.length(); i++){
            if(x[i]!=y[i]){
                if(f){
                    char a=x[i];
                    char b=y[i];
                    x[i]=max(a,b);
                    y[i]=min(a,b);
                    f=false;
                    }
                else{
                   char a=x[i];
                   char b=y[i];
                   x[i]=min(a,b);
                   y[i]=max(a,b); 
                }
            }
        }
        cout<<x<<endl;
        cout<<y<<endl;

    }
}