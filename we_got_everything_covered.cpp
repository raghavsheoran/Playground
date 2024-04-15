#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                cout<<char(j+97);
            }
           
        }
         cout<<endl;

    }
    return 0;
}