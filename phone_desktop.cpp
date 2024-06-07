#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a=0,b=0;
        int max_one=0;
        cin>>a>>b; // a->1*1 b->2*2
        int min_screen=b/2;
        max_one+=7*min_screen;
        if(b%2!=0) {min_screen++; max_one+=11;}
        a-=max_one;
        
        if(a>0) {min_screen+=a/15;
        if(a%15!=0) min_screen++;}
        cout<<min_screen<<endl;
    }
    return 0;
}