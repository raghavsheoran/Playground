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
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        int res=0;
        int curr=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0) curr++;
            else{
                res=max(res,curr);
                curr=0;
            } 
        }
        res=max(res,curr);
        cout<<res<<endl;
    }

}