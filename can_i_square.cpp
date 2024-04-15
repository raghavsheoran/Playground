#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        long long sum=0;
        for(int i=0; i<n; i++) {long long temp;
        cin>>temp;
        sum+=temp;}
        int sq=sqrt(sum);
        long long sq_l=sq;
        if(sq_l*sq_l==sum){ 
            cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
    return 0;
}