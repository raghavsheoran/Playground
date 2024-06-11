#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n,k;
        
        cin>>n>>k;
        
       
        if(k<n){
            long long add=k;
            int mult=n/k;
            k=k*mult;
            if(k<n) k+=add;
        }
        int res=k/n;
        if(k%n!=0) res++;
        cout<<res<<endl;

    }
}
