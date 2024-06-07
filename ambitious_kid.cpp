#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int res=INT_MAX;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        res=min(res,abs(n));
        

    }
    cout<<res;
    return 0;
}