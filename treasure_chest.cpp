#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x,y,k;
        cin>>x>>y>>k;
        if(x>=y){ // treasure is on the right
        cout<<x<<endl;
        }
        else{
            if(abs(x-y)<=k) cout<<y<<endl;
            else cout<<y+abs(x-y)-k<<endl;
        }
        
    }
    return 0;
}