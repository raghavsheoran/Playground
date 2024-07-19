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
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> nums(n);
    int sum=0;
    for(int i=0; i<n; i++){
       
        cin>>nums[i];
        sum+=nums[i];
    }
    sort(nums.begin(),nums.end());
    int to_remove=n-1;
    int removed=0;
   
    for(int i=max(0,n-x); i<n; i++) sum-=2*nums[i]; // k elements substracted
    
    int res=sum;
    int sub=n-x-1;
    while(removed<k && to_remove>=0){
     sum+=nums[to_remove];
     if(sub>=0) sum-=2*nums[sub];
     
     res=max(res,sum);
     sub--;
     removed++;
     to_remove--;
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
 
