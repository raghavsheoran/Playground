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
    int n,k;
    cin>>n>>k;
    vector<ll> nums(n);
    vector<ll> f(k);
    
    for(int i=0; i<n; i++) cin>>nums[i];
    for(int i=0; i<k; i++) cin>> f[i];
    sort(nums.begin(),nums.end());
    sort(f.begin(),f.end());
    int a=0;
    int b=n-1;
    int aa=0;
    int bb=k-1;
    ll res=0;
    while(a<=b){
        ll ff=abs(nums[a]-f[aa]);
        ll fb=abs(nums[a]-f[bb]);
        ll bbc=abs(nums[b]-f[bb]);
        ll bf=abs(nums[b]-f[aa]);
        res+=max(ff,max(fb,max(bbc,bf)));
        if(max(ff,max(fb,max(bbc,bf)))==ff) {aa++; a++;}
        else if(max(ff,max(fb,max(bbc,bf)))==fb) {a++; bb--;}
        else if(max(ff,max(fb,max(bbc,bf)))==bbc) {b--; bb--;}
        else if(max(ff,max(fb,max(bbc,bf)))==bf) {b--; aa++;}
    }

    cout<<res<<endl;

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    FOR(i,0,t) test();
    

}
 
