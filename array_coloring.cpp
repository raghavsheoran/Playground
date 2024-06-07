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
        long long sum=0;
        for(int i=0; i<n; i++) {cin>>nums[i]; sum+=nums[i];}
        if(sum%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}