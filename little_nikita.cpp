#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m,n;
        cin>>m>>n;
        if(m<n) cout<<"NO";
        else{
            if(abs(n-m)%2==0) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
}