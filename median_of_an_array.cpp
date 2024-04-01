#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int med,res=0;
        med=(n-1)/2;
        for(int j=med; j<n; j++){
            if(nums[j]==nums[med]) res++;
            else break;
        }
        cout<<res<<endl;

    }
    return 0;
}