#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,m;
        cin>>n>>m;
        vector<int> nums(7);
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++) nums[int(s[i])-65]++;
        int res=0;
        for(int i=0; i<7; i++){
            if(nums[i]<m) res+=(m-nums[i]);
        }
        cout<<res<<endl;

    }
    return 0;
}