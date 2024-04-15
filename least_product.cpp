#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<long long> nums(n);
        int neg=0;
        int zero=0;
        for(int i=0; i<n; i++) {cin>>nums[i]; if(nums[i]<0) neg++;
        if(nums[i]==0) zero++;} // no of zeroes and no of negative number recorded
        if(neg%2==0) { // even number of negative number of positive
            if(zero>0) cout<<0<<endl;
            else {cout<<1<<endl; cout<<1<<" "<<0<<endl;}

        }
        else{
            cout<<0<<endl;

        }

    }
}