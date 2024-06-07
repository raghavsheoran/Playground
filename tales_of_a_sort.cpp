#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        int res=0;
        for(int i=1; i<n; i++){
            if(nums[i]<nums[i-1]) res=max(res,nums[i-1]);
        }
        cout<<res<<endl;

    }
    return 0;
}