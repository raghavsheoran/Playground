// Author - Raghav Sheoran
// CodeForces Handle - raghav.sheoran
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
//---------------------------------------------------------------------------//
#define ll long long
#define ld long double
//---------------------------------------------------------------------------//
#define pl pair<ll,ll>
#define pd pair<ld,ld>
#define pi pair<int,int>
#define f first
#define s second
//---------------------------------------------------------------------------//
#define vi vector<int>
#define vll vector<ll>
#define vld vector<ld>
#define vpi vector<pi>
#define vpl vector<pl>
#define vpd vector<pd>
//---------------------------------------------------------------------------//
#define FOR(a,b) for(int i=a; i<b; i++) // upper limit excludes
#define ROF(a,b) for(int i=b; i>=0; i--) // both limits included
//---------------------------------------------------------------------------//
#define sz(x) int(size(x)) // typecated to int
#define bg begin()
#define all(x) bg(x), end(x)
#define SORT(x) sort(all(x))
#define pb push_back
//---------------------------------------------------------------------------//
void test(){
    ll n,m; // no of vertices and no of edges
    cin>>n>>m;
    vector<vector<int>> adj_list(n);
    FOR(0,m){
        ll u,v;
        cin>>u>>v;
        adj_list[u-1].pb(v-1);
        adj_list[v-1].pb(u-1);
    }
    unordered_map<int,int> frequency;
    unordered_map<int,vi> nodes;
    
    FOR(0,n){
        frequency[adj_list[i].size()]++; // will store how many vertex are having a particlular number of neighbour
        nodes[adj_list[i].size()].push_back(i); // this size is possesed by this node
    }
    
    // the size of frequency map can be 2 or 3
    if(frequency.size()==3){
        int x,y;
        for(auto it=frequency.begin(); it!=frequency.end(); it++){
            if(it->first==1) { }
            else if(it->second==1) x=it->first;
            else y=it->first-1;
        }
    cout<<x<<" "<<y;
    }
    else{
        int a=1,b;
        for(auto it=frequency.begin(); it!=frequency.end(); it++){
            if(it->first!=1) b=it->first; // number is it->second
        }
        if(frequency[b]*(b-1)==frequency[a]-1) cout<<1<<" "<<b-1;
        else cout<<b<<" "<<b-1;
        // one possible answe is a b, lets contracdisct it

    }
    cout<<endl;

    
    

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    //t=1;
    cin>>t;
    for(int i=0; i<t; i++) test();
    int n;

}
 
