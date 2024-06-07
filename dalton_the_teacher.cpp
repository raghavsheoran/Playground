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
        int unhappy=0;
        for(int j=0; j<n; j++) {
            cin>>nums[j];
            if(nums[j]==j+1) unhappy++;
        }
        int res=unhappy/2;
        if(unhappy%2!=0) res++;
        cout<<res<<endl;

    }
    return 0;

}
