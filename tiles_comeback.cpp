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
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    if(nums[0]==nums[n-1]){ // same tile colour for the first and last tile
    int count=0;
    for(int i=0; i<n; i++) if(nums[i]==nums[0])count++;
    if(count>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    else{
        int first=0;
        int first_index;
        for(int i=0; i<n; i++){
            if(nums[i]==nums[0]){
                first++;
                if(first==k) first_index=i;
            }
        }
        int last=0;
        int last_index;
        for(int i=n-1; i>=0; i--){
            if(nums[i]==nums[n-1]){
                last++;
                if(last==k) last_index=i;
            }
        }
        if(first<k || last<k) cout<<"NO"<<endl;
        else{
            if(first_index<last_index) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
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
 
