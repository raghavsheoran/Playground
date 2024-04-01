#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        long long sum=0;
        vector<long long> nums(n);
        bool possible=true;
        for(int i=0; i<n; i++) {cin>>nums[i]; sum+=nums[i];}
        long long equal=sum/n;
        long long extra=0;
        for(int i=0; i<n; i++){
            if(nums[i]>equal){extra+=(nums[i]-equal);}
            else if(nums[i]<equal){
                extra-=(equal-nums[i]);
                if(extra<0) {possible=false; break;}
            }
        }
        if(possible) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;

    }
    return 0;
}