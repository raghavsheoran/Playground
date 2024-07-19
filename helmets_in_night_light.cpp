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
#include <unordered_map> // Dont use it
#include <unordered_set> // Dont use it
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
#define FOR(i,a,b) for(int i=a; i<b; i++) // upper limit excludes
#define ROF(i,a,b) for(int i=b; i>=0; i--) // both limits included
//---------------------------------------------------------------------------//
#define sz(x) int(size(x)) // typecated to int
#define bg begin()
#define all(x) bg(x), end(x)
#define SORT(x) sort(all(x))
#define pb push_back
//---------------------------------------------------------------------------//
void test(){
   ll n,p;
   cin>>n>>p;
   vector<ll> transmit(n);
   vector<ll> cost(n);
   ll res=p;
   ll notified=1;
   priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq; // cost, transmit
   for(int i=0; i<n; i++) cin>>transmit[i];
   for(int i=0; i<n; i++) cin>>cost[i]; 
   for(int i=0; i<n; i++) pq.push({cost[i],transmit[i]});
   while(pq.empty()==false && pq.top().first<p){ // if greater than p, pak will notify
   ll t=pq.top().second;
   ll c=pq.top().first;
   pq.pop();
   res+=(min(t,n-notified)*c);
   notified=min(n,notified+t);
   }
   if(notified<n){
    res+=(n-notified)*p;
   }
   cout<<res<<endl;

} 
//---------------------------------------------------------------------------//
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    FOR(i,0,t) test();
    

}
 
