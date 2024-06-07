#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int x=0;
        vector<int> zero;
        vector<int> xr; 
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
            x=x^nums[i];
            if(x==0) zero.push_back(i);
            xr.push_back(x);
        }
        int k=INT_MAX;
        for(int i=0; i<zero.size(); i++){
            if((zero[i]+1%2)!=0) continue;
            int k=(zero[i]+1)/2;
            bool z=true;
            for(int j=k-1; j<n; j+=k){
                if(xr[j]!=0)
            }
        }
    }
}