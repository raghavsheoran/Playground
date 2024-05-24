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
        bool two=false;
        for(int i=0; i<n; i++){
            int index=i+1;
            int bf=nums[i];
            if(nums[bf-1]==index){two=true; break;}

        }
        if(two) cout<<2<<endl;
        else cout<<3<<endl;

    }
}