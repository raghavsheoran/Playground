#include<iostream>
using namespace std;
#include<map>
#include<vector>
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long a,b,k_x,k_y,q_x,q_y;
        cin>>a>>b;
        cin>>k_x>>k_y;
        cin>>q_x>>q_y;
        map<string,int> mp;
        vector<int> x={1,1,-1,-1};
        vector<int> y={1,-1,1,-1};
        for(int i=0; i<4; i++){
            mp[to_string(k_x+x[i]*a)+'x'+to_string(k_y+y[i]*b)]++;
        }
        if(a!=b){for(int i=0; i<4; i++){
            mp[to_string(k_x+x[i]*b)+'x'+to_string(k_y+y[i]*a)]++;
        }}
        for(int i=0; i<4; i++){
            mp[to_string(q_x+x[i]*a)+'x'+to_string(q_y+y[i]*b)]++;
        }
        if(a!=b){for(int i=0; i<4; i++){
            mp[to_string(q_x+x[i]*b)+'x'+to_string(q_y+y[i]*a)]++;
        }}
        int count=0;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second>1) count++;
            
        }
        cout<<count<<endl;


    }
    return 0;
}