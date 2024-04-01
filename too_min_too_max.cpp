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
        int a,b,c,d;
        a=nums[0]; b=nums[1];
        c=nums[nums.size()-2]; d=nums[nums.size()-1];
        long long res=0;
        res+=(d-a)+(c-a)+(c-b)+(d-b);
        cout<<res<<endl;
    }
    return 0;

}