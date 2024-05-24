#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b;
        cin>>a>>b;
        cout<<min(a,b)<<" "<<max(a,b)<<endl;
    }
    return 0;
}