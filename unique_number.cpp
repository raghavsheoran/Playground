#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int k=9;
        int res=0;
        int pos=1;
        while(n>0 && k>0){
            if(n>=k){
                n=n-k;
                res+=pos*k;
                pos=pos*10;
                k--;
            }
            else k--;

        }
        if(n!=0) cout<<-1<<endl;
        else cout<<res<<endl;

    }
}