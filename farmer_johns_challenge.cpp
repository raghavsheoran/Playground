#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        if(k==1){for(int i=1; i<=n; i++) cout<<i<<" ";}
        else if(k==n){for(int i=1; i<=n; i++) cout<<1<<" ";}
        else cout<<-1;
        cout<<endl;

    }
    return 0;
}