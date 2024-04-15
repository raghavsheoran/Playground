#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c) cout<<1<<" "<<1<<" "<<1<<endl; // all equal
        else if(a==b || b==c || a==c){ // two equal
        if(a==b) cout<<0<<" "<<0<<" "<<1<<endl;
        else if(b==c)cout<<1<<" "<<0<<" "<<0<<endl;
        else cout<<0<<" "<<1<<" "<<0<<endl;}
        else{
            if(a==max(a,max(b,c))) cout<<1<<" "<<0<<" "<<0<<endl;
            else if(b==max(a,max(b,c))) cout<<0<<" "<<1<<" "<<0<<endl;
            else cout<<0<<" "<<0<<" "<<1<<endl;
        }
        cout<<endl;
        

    }
    return 0;
}