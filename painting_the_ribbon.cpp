#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m,n,k;
        cin>>n>>m>>k;
        if(m==1) cout<<"NO"<<endl;
        else {
            int p_c=n/m;
            if(n%m!=0) p_c++; // the col req one
            if(k>=n-p_c) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}