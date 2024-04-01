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
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        sort(nums.begin(),nums.end());
        cout<<nums[nums.size()-1]-nums[0]<<endl;


    }
    return 0;

}