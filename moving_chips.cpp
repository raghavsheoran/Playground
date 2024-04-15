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
        int one=0;
        int f=INT_MAX;
        int l=INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                one++;
                f=min(f,i);
                l=max(l,i);
            }
        }
        cout<<l-f+1-one<<endl;
    }
    return 0;
}