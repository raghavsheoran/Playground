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
        bool possible=true;
        for(int i=0; i<n; i++) cin>>nums[i];
        int j=0; // j will be the starting point
        int k=1; // next starting point
        while(j<n){
            for(int m=j+1; m<k && m<n; m++){
                if(nums[m]<nums[m-1]){possible=false;  break;}
            }
            j=k;
            k=k*2;
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}