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
    multiset<int> left; // elements on left
    multiset<int> right; // elements on right
    
    for(int i=0; i<n; i++) {cin>>nums[i]; right.insert(nums[i]);
    }
    vector<int> res(n);
    for(int i=0; i<n; i++){
        right.erase(right.find(nums[i])); // erased from right
        int r=distance(right.lower_bound(nums[i]), right.end()); // number of element greater than equal to nums[i] on right
        int l=0; // total numbers to be deleted from left
        int sum=k;
        
        res[i]=l+r;


        left.insert(nums[i]); // added to left
        
    }
    for(int i=0; i<n; i++) cout<<res[i]<<" ";
    cout<<endl;

    

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    FOR(i,0,t) test();
    

}
 
