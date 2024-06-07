#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        unordered_map<int,vector<int>> mp;
        vector<int> nums(n);
        vector<int> result(n,-1);
        vector<int> to_erase;
        for(int i=0; i<n; i++) {cin>>nums[i]; mp[nums[i]].push_back(i);}
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second.size()==1) {to_erase.push_back(it->first);}
        }
        for(int i=0; i<to_erase.size(); i++) mp.erase(to_erase[i]);
        if(mp.size()<2) cout<<-1<<endl;
        else{
            vector<int> index=mp.begin()->second;
            result[index[0]]=1; result[index[1]]=2;
            for(int i=2; i<index.size(); i++) result[index[i]]=1;
            mp.erase(mp.begin());
            index=mp.begin()->second;
            result[index[0]]=2; result[index[1]]=3;
            for(int i=2; i<index.size(); i++) result[index[i]]=2;
            for(int i=0; i<n; i++){
                if(result[i]==-1) result[i]=1;
                cout<<result[i]<<" ";
            }
            cout<<endl;


        }

    }

}