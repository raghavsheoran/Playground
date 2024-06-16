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
    long long a,b;
    cin>>n>>a>>b;
    long long sum=0;
    vector<long long> holes(n-1);
    long long first;
    for(int i=0; i<n; i++) {
        if(i==0){cin>>first; sum+=first;}
        else{cin>>holes[i-1]; sum+=holes[i-1];}}
    long long water=(first*a)/sum;
    
    sort(holes.begin(),holes.end());
    int index=n-2; // index which should be bolcked
    while(water<b){
      sum-=holes[index];
      index--;
      water=(first*a)/sum;
    }
    cout<<n-2-index<<endl;

    

} 
//---------------------------------------------------------------------------//
int main(){
    test();
   

}
 
