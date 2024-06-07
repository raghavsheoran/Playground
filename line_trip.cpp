#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,x;
        cin>>n>>x;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        int res=0;
        for(int i=1; i<n; i++) res=max(res,nums[i]-nums[i-1]);
        res=max(res,nums[0]);
        res=max(res,2*(x-nums[n-1]));
        cout<<res<<endl;

    }
}