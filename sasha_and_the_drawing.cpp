#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n,k;
        cin>>n>>k;
        long long res=0;
        if(k<=4*n-4){
            res+=(k/2);
            if(k%2!=0) res++;
        }
        else if(k==4*n-3){
            res=2*n-1;
        }
        else res=2*n;
        cout<<res<<endl;

    }
    return 0;
}