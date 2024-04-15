#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n;
        cin>>n;
        long long sum=0;
        sum=(n*n*(n+1))/2;
        int c=0;
        for(int i=1; i<=n; i++){
            long long prev=i*n;
            if(prev<(n*(n+1))/2){
                sum-=prev;
                sum+=(n*(n+1))/2;
                c=i;
            }
            else break;
        }
        cout<<sum<<" "<<n+c<<endl;
        for(int i=1; i<=n; i++){
            cout<<1<<" "<<i<<" ";
            for(int j=1; j<=n; j++) cout<<j<<" ";
            cout<<endl;
        }
        for(int i=1; i<=c; i++){
            cout<<2<<" "<<i<<" ";
            for(int j=1; j<=n; j++) cout<<j<<" ";
            cout<<endl;
        }
    }
    return 0;

}