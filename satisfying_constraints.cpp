#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> nums;
        int x=INT_MIN,y=INT_MAX;
        for(int j=0; j<n; j++){
            int a; // type
            int k; // num
            cin>>a>>k;
            if(a==1) x=max(x,k);
            else if(a==2) y=min(y,k);
            else nums.push_back(k);
        }
        int res=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]>=x && nums[j]<=y) res--;
        }
        res+=(y-x+1);
        if(res>=0) cout<<res;
        else cout<<0;
        cout<<endl;
    }
}