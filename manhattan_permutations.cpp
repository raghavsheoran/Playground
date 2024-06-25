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
    ll n,k;
    cin>>n>>k;
    if(k%2!=0) cout<<"NO"<<endl;
    else{
    vector<int> nums(n+1);
    ll max_sum=0;
    FOR(i,1,n+1) {nums[i]=i; max_sum+=abs(i-(n-i+1));} // 1 to n both included
    if(k>max_sum) cout<<"NO"<<endl;
    else{ll rem=n;
    ll add=(rem-1)*2;
    ll req=k;
    int l=1,r=n;
    while(add<=req && l<r){
        req-=add; // substract it
        rem-=2;
        add=(rem-1)*2;
        swap(nums[l],nums[r]);
        l++; r--;
    }
    req=req/2;
    int n_r=l+req;
    swap(nums[l],nums[n_r]);
    cout<<"YES"<<endl;
    FOR(i,1,n+1) cout<<nums[i]<<" ";
    cout<<endl;
    }
    }



} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    FOR(i,0,t) test();
    

}
 
