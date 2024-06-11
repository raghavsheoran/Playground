#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<utility>
int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<pair<int,int>> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i].first;
            nums[i].second=i;
        }
        vector<int> res(n);
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            res[nums[i].second]=n-i;
        }
        for(int i=0; i<n; i++) cout<<res[i]<<" ";
        cout<<endl;
    }
}