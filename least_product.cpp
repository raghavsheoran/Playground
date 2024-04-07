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
        long long p=1;
        int neg=0;
        int zero=0;
        for(int i=0; i<n; i++) {cin>>nums[i]; if(nums[i]<0) neg++;
        if(nums[i]==0) zero++;}
        if(neg%2==0) {
            if(zero>0) cout<<0<<endl;
            else {cout<<1<<endl; cout<<0<<" "<<0<<endl;}

        }
        else{
            cout<<0<<endl;

        }

    }
}