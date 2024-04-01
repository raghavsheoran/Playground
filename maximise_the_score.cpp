#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> nums(2*n);
        for(int i=0; i<2*n; i++){
            cin>>nums[i];

        }
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(int i=0; i<2*n; i+=2){
            sum+=nums[i];
        }
        cout<<sum<<endl;
    }
    return 0;

}