#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<pair<int,int>> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i].first;
        for(int i=0; i<n; i++) cin>>nums[i].second;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++) cout<<nums[i].first<<" ";
        cout<<endl;
        for(int i=0; i<n; i++) cout<<nums[i].second<<" ";
        cout<<endl;

    }
    return 0;

}