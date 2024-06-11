#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k,x;
        // n -> number of element
        // k -> mex
        // x -> max element
        cin>>n>>k>>x;
        if(k>n || k>x+1) cout<<-1<<endl;
        else{
            vector<int> res;
            for(int i=0; i<k; i++) res.push_back(i);
            for(int i=k+1; res.size()<n ;i++) {
                if(x==k) res.push_back(k-1);
                else res.push_back(x);
            }
            int ans=0;
            for(int i=0; i<res.size(); i++) ans+=res[i];
            cout<<ans<<endl;

        }
    }

}