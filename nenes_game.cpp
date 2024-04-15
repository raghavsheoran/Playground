#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int k,q;
        cin>>k>>q;
        vector<int> out(k);
        int a1=INT_MAX;
        int n=INT_MAX;
        for(int i=0; i<k; i++) {cin>>out[i]; a1=min(a1,out[i]);}
        vector<int> player(q);
        for(int i=0; i<q; i++) {cin>>player[i]; cout<<min(a1-1,player[i])<<" ";}
        cout<<endl;
    }
    return 0;

}