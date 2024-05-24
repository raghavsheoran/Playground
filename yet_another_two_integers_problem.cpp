#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m,n;
        cin>>m>>n;
        int diff=abs(m-n);
        int res=diff/10;
        if(diff%10!=0) res++; 
        cout<<res<<endl;
        
    }
    return 0;

}