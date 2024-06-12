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
    priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>> pq;
    // {time available, {damage, cooldowm}}
    ll boss_health, n;
    cin>>boss_health>>n;
    vector<ll> damage(n);
    vector<ll> cooldown(n);
    for(int i=0; i<n; i++) cin>>damage[i];
    for(int i=0; i<n; i++) cin>>cooldown[i];
    for(int i=0; i<n; i++){
        pq.push({1,{damage[i],cooldown[i]}});
    }
    ll res=0;
    while(boss_health>0){
        auto temp=pq.top();
        pq.pop();
        ll t=temp.first;
        ll d=temp.second.first;
        ll c=temp.second.second;
        res=t;
        boss_health-=d;
        pq.push({t+c,{d,c}});

    }
    cout<<res<<endl;
    

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    //t=1;
    cin>>t;
    FOR(0,t) test();
    int n;

}
 
