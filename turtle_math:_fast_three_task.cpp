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
        bool is_there=false;
        for(int i=0; i<n; i++) {cin>>nums[i]; sum+=nums[i]; if(nums[i]%3==1) is_there=true;}
        if(sum%3==0) cout<<0<<endl;
        else if(sum%3==2) cout<<1<<endl;
        else{
            if(is_there) cout<<1<<endl;
            else cout<<2<<endl;
            
        }
    }
    return 0;
}