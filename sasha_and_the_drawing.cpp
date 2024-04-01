#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n,k;
        cin>>n>>k;
        long long res;
        if(k<=2*n) {
            res=k/2;
            if(k%2!=0) res++;
        }
        else {res=n; 
        k-=(2*n); res+=k;}
        cout<<res<<endl;

    }
    return 0;
}