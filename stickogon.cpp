#include<iostream>
using namespace std;
#include<unordered_map>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        unordered_map<int,int> mp;
        int n;
        cin>>n;
        int res=0;
        for(int i=0; i<n; i++) {int k; cin>>k; mp[k]++;}
        for(auto it=mp.begin(); it!=mp.end(); it++){
            for(int j=3; j<=it->second; j++){
                if(it->second%j==0) res+=(it->second/j);
            }
        }
        cout<<res<<endl;


    }
}
