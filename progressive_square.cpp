#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,c,d;
        bool possible=true;
        cin>>n>>c>>d;
        vector<int> nums(n*n);
        for(int i=0; i<n*n; i++) cin>>nums[i];
        sort(nums.begin(),nums.end());
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++) mp[nums[i]]++;
        queue<pair<int,pair<int,int>>> q;
        q.push({nums[0],{1,1}});
        while(q.empty()==false){
            int number=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
            q.pop();
            if(row<=n && col<=n){
                if(mp.find(number)==mp.end()) {possible=false;}
                else{
                    mp[number]--;
                    q.push({number+c,{row+1,col}});
                    q.push({number+d,{row,col+1}});
                }
            }
            if(possible==false) break;
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}