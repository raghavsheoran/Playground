#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        if(n%2!=0) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++){
                cout<<char(65+i)<<char(65+i);
            }
            cout<<endl;
        }
    }
    return 0;
}