#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<unordered_set>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> nums(n);
        unordered_map<int,unordered_set<char>> mp;
        for(int i=0; i<26; i++) mp[0].insert(char(i+97));
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            char c=*mp[temp].begin();
            cout<<c;
            mp[temp].erase(c);
            mp[temp+1].insert(c);

        }
        cout<<endl;
    }
    return 0;
}