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
vector<int> dp;
int min_coin(int n){
    if(n==0) return 0;
    if(n<0) return -1;
    if(dp[n]!=-1) return dp[n];
    int a=INT_MAX,b=INT_MAX,c=INT_MAX,d=INT_MAX,e=INT_MAX;
    if(min_coin(n-15)!=-1) a=1+min_coin(n-15);
    if(min_coin(n-10)!=-1) b=1+min_coin(n-10);
    if(min_coin(n-6)!=-1) c=1+min_coin(n-6);
    if(min_coin(n-3)!=-1) d=1+min_coin(n-3);
    if(min_coin(n-1)!=-1) e=1+min_coin(n-1);
    dp[n]= min(a,min(b,min(c,min(d,e))));
    return dp[n];
}
void test(){
    int n;
    cin>>n;
    dp.resize(n+1,-1);
    cout<<min_coin(n)<<endl;

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    FOR(i,0,t) test();
    

}
 
