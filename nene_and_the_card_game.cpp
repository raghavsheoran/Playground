#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        int res=0;
        for(int i=0; i<n; i++) {
            int temp;
            cin>>temp;
            mp[temp]++;
            if(mp[temp]==2) res++;
            }
        cout<<res<<endl;

    }
}