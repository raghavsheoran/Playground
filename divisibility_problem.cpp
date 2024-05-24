#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long m,n;
        cin>>m>>n;
        long long res=0;
        while(true){
            if((res+m)%n==0){cout<<res<<endl; break;}
            else res++;
        }

    }
    return 0;
}