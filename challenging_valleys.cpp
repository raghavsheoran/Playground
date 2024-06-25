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
    int n;
    cin>>n;
    vi nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];
    int valley=0;
    int left=0;
    int right=0;
    while(right<n){
        while(right<n && nums[right]==nums[left]) right++;
        // left=starting point
        //right= next to ending point
        int l=INT_MAX;
        int r=INT_MAX;
        if(left-1>=0 ) l=nums[left-1];
        if(right<n) r=nums[right];
        if(nums[left]<l && nums[left]<r) valley++;
        left=right;
    }
    
    if(valley==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    //t=1;
    cin>>t;
    FOR(0,t) test();
   

}
 