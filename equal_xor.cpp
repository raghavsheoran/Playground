#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        vector<int> given(2*n);
        for(int i=0; i<2*n; i++) cin>>given[i];
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) {mp[given[i]]++;}
        vector<int> answer_1;
        vector<int> answer_2;
        int done=0;
        for(auto it= mp.begin(); it!=mp.end() && done<2*k; it++){
            if(it->second==2) {answer_1.push_back(it->first); answer_1.push_back(it->first); done+=2;}
        }
        int two=done/2;
        for(auto it= mp.begin(); it!=mp.end() && done<2*k; it++){
            if(it->second==1) {answer_1.push_back(it->first); answer_2.push_back(it->first); done++;}
        }
        mp.clear();
        for(int i=n; i<2*n; i++) mp[given[i]]++;
        done=0;
        for(auto it= mp.begin(); it!=mp.end() && done<two; it++){
            if(it->second==2) {answer_2.push_back(it->first); answer_2.push_back(it->first); done++;}
        }
        for(int i=0; i<answer_1.size(); i++) cout<<answer_1[i]<<" ";
        cout<<endl;
        for(int i=0; i<answer_2.size(); i++) cout<<answer_2[i]<<" ";
        cout<<endl;


    }
}