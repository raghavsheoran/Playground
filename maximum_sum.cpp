#include<iostream>
using namespace std;
#include<vector>
vector<long long> maxSubArray(vector<int>& nums) {
        long long min_sum=0;
        long long max_sum=LONG_MIN;
        long long sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            max_sum=max(max_sum,sum-min_sum);
            min_sum=min(min_sum,sum);
        }
        if(max_sum<0) return {0,sum};
        return {max_sum,sum};
    }
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        long long sub=maxSubArray(nums)[0]; // max subarray sum
        long long sum=maxSubArray(nums)[1]; // sum of the whole of array
        
        for(int i=0; i<k ;i++){
            long long dig=sub;
            sub=(sub+dig)%(1000000000+7);
            sum=(sum+dig)%(1000000000+7);
        }
        if(sum<0) cout<<(sum+(1000000000+7))<<endl;
        else cout<<sum<<endl;
    }
    return 0;

}