#include<iostream>
using namespace std;
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
#include<utility>
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        vector<pair<int,int>> points;
        for(int i=0; i<4; i++){
            int a,b;
            cin>>a>>b;
            points.push_back({a,b});
        }
        int a;
        unordered_map<int,int> mp;
        for(int i=1; i<=3; i++){
            mp[abs(points[i].first-points[0].first)+abs(points[i].second-points[0].second)]++;
            if(mp[abs(points[i].first-points[0].first)+abs(points[i].second-points[0].second)]==2) 
            a=abs(points[i].first-points[0].first)+abs(points[i].second-points[0].second);


        }
        cout<<a*a<<endl;

    }
}