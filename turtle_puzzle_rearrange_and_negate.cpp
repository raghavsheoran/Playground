#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        long long res=0;
        for(int i=0; i<n; i++){
            long long temp;
            cin>>temp;
            res+=abs(temp);

        }
        cout<<res<<endl;
    }
    return 0;
}