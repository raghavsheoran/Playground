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
        int min_val=0;
        for(int i=0; i<n; i++) {cin>>nums[i];}
        int l=1; int r=n-2;
        bool possible= true;
        while(l<=r){
            int left=nums[l-1];
            if(left<min_val){ break;}
            int diff;
            diff=left-min_val;
            nums[l-1]=min_val;
            nums[l]=nums[l]-2*diff;
            nums[l+1]=nums[l+1]-diff;
            int right=nums[r+1];
            if(right<min_val){ break;}
            diff=right-min_val;
            nums[r+1]=min_val;
            nums[r]=nums[r]-2*diff;
            nums[r-1]=nums[r-1]-diff;
            if(nums[l]<min_val || nums[r]<min_val){ break;}
            l++;
            r--;
        }
        for(int i=0; i<n; i++){
            if(nums[i]!=0) possible=false;
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}