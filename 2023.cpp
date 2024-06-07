#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n,k;
        cin>>n>>k;
        long long p=1;
        for(int i=0; i<n; i++) {
            int temp;
            cin>>temp;
            p=p*temp;
        }
        if(2023%p!=0) cout<<"NO";
        else{
            cout<<"YES"<<endl;
            int rem=2023/p;
            cout<<rem<<" ";
            for(int i=0; i<k-1; i++) cout<<1<<" ";

        }
        cout<<endl;

    }
}