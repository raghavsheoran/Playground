#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> rem(n-1);
        vector<int> nums(n);
        for(int i=0; i<n-1; i++) {cin>>rem[i]; nums[i]=rem[i]+1;}
        for(int i=0; i<n-1; i++){
            int k=rem[i];
            while(k<nums[i+1]) k+=nums[i];
            nums[i+1]=k;
        }
        for(int i=0; i<n; i++) cout<<nums[i]<<" ";
        cout<<endl;

    }
}