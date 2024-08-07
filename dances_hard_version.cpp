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
    ll n,m;
    cin>>n>>m;
    vector<int> a(n-1);
    vector<int> b(n);
    for(ll i=0; i<n-1; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll a_index=0;
    ll b_index=0;
    while(a_index<n-1){ // should not go outside
     while(b_index<n && b[b_index]<=a[a_index]) b_index++;
        // a_index matches with b_index
        if(b_index<b.size()){
            b[b_index]=-1; // used
            a_index++;
            b_index++;
        }
        else{
            break;
        }
    }
    ll unused;
    for(ll i=n-1; i>=0; i--){
        if(b[i]!=-1){
            unused=b[i];
            break;
        }
    }
    if(m==1){
    ll res=0;
    if(1<unused) cout<<n-a_index-1<<endl;
    else cout<<n-a_index<<endl;
    }
    else{
    ll res=0;
    if(m<unused){
        res+=(m)*(n-a_index-1); 
    }
    else{
        res+=(unused-1)*(n-a_index-1); // the ones that will contribue
        res+=(m-unused+1)*(n-a_index);
    }
    
    cout<<res<<endl;
    }

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
 
