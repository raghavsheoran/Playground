#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<map>
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        mp[temp]++;}
        unordered_map<int,vector<int>> freq;
        for(auto it=mp.begin(); it!=mp.end(); it++) freq[it->second].push_back(it->first);
        vector<int> res;
        int f=1;
        while(freq.empty()==false){
            if(freq.find(f)!=freq.end()){
                vector<int> rs=freq[f];
                sort(rs.begin(),rs.end());
                for(int i=0; i<)

            }
            else f++;

        }
        


    }
    return 0;
}