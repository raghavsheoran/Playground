#include<iostream>
using namespace std;
#include<vector>
#include<utility>
bool customComparison(pair<long long,long long> a, pair<long long,long long> b) 
{ 
    
    return a.first*a.second < b.first*b.second; 
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long attack_power, initial_health, n;
        cin>>attack_power>>initial_health>>n;
        vector<pair<long long,long long>> monster(n);
        for(int i=0; i<n; i++) cin>>monster[i].first;
        for(int i=0; i<n; i++) cin>>monster[i].second;
        bool possible=true;
        for(int i=0; i<n; i++){
            if(initial_health<=0) {possible=false; break;}
            long long attack_needed=monster[i].second/attack_power;
            if(monster[i].second%attack_power!=0) attack_needed++; 
            // this is for sure that this much attack will be needed
            initial_health-=monster[i].first*(attack_needed-1); // one more attack to go
            if(initial_health<=0) {possible=false; break;}
            initial_health-=monster[i].first;
        }
        if(!possible) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}