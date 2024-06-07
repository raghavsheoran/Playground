#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int k=9;
        for(int i=0; i<n; i++){
            cout<<k;
            k--;
            if(k<0) k=9;
        }
        cout<<endl;
    }
}