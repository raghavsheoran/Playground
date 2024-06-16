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
   int n,c;
   cin>>n>>c;
   vector<int> nums(n);
   for(int i=0; i<n; i++) cin>>nums[i];
   vector<int> prev(c+1,-1); // -1 being the ground from where the bridge start
   vector<int> largest(c+1,INT_MIN); // largest gap 
   vector<int> second_largest(c+1,INT_MIN); // second largest gap
   for(int i=0; i<n; i++){
    int color=nums[i];
    int gap=i-prev[color]-1;
    prev[color]=i;
    if(gap>=largest[color]){second_largest[color]=largest[color]; largest[color]=gap;}
    else if(gap>=second_largest[color]){
        second_largest[color]=gap;
    }
    
   }
   for(int i=1; i<=c; i++){
    int gap=n-prev[i]-1;
    if(gap>=largest[i]){second_largest[i]=largest[i]; largest[i]=gap;}
    else if(gap>=second_largest[i]){
        second_largest[i]=gap;
    }
    }
   
   int res=INT_MAX;
   for(int i=1; i<=c; i++){
    int best_option=largest[i]/2;
    if(second_largest[i]!=INT_MIN){
        best_option=max(best_option,second_largest[i]);
    }
    res=min(res,best_option);

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
 
