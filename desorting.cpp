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
        int min_diff=INT_MAX;
        for(int i=1; i<n; i++) min_diff=min(min_diff,nums[i]-nums[i-1]);
        if(min_diff<0) cout<<0<<endl;
        else cout<<min_diff/2+1<<endl;
    }
    return 0;

}