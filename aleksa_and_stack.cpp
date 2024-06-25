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
    vector<ll> res;
    res.push_back(2); res.push_back(3);
    long long sum=0;
    sum=5;
    long long j=4;
    for(int i=2; i<n; i++){
        while(3*j%sum==0) j++;
        res.push_back(j);
        sum+=j;
        j++;
        sum-=res[res.size()-3];

    }
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;


} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    //t=1;
    cin>>t;
    FOR(0,t) test();
    int n;

}
 