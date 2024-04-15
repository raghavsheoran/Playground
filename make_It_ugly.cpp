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
        int pos=INT_MAX;
        int res=INT_MAX;
        int kk=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=nums[0]) {
                if(pos==INT_MAX){pos=i;}
                else {res=min(res,i-pos-1); pos=i;}
            }
            else kk++;
        }
        if(kk==n) cout<<-1<<endl;
        else if(kk==n-1) cout<<min(pos,n-pos-1)<<endl;
        else cout<<res<<endl;
    }
    return 0;
}