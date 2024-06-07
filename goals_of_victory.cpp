#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        long long res=0;
        for(int i=0; i<n-1; i++) {
            int k;
            cin>>k;
            res+=k;
        }
        cout<<-1*res<<endl;

    }
}