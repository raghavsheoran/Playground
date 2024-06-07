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
        vector<int> res;
        for(int i=0; i<n; i++) cin>>nums[i];
        res.push_back(nums[0]);
        for(int i=1; i<n; i++){
            if(nums[i-1]<=nums[i]) res.push_back(nums[i]);
            else {res.push_back(nums[i]); res.push_back(nums[i]);}

        }
        cout<<res.size()<<endl;
        for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
        cout<<endl;

    }
    return 0;
}