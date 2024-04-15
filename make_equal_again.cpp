#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        int left=nums[0];
        int l=1;
        for(int i=1; i<n; i++){
            if(nums[i]==left) l++;
            else break;
        }
        int right=nums[n-1];
        int r=1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]==right) r++;
            else break;
        }
        if(l==n) cout<<0<<endl;
        else if(left==right) cout<<n-l-r<<endl;
        else cout<<n-max(l,r)<<endl;
    }
    return 0;

}