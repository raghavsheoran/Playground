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
   int n,a,b;
   cin>>n>>a>>b;
   string s;
   cin>>s;
   if(a>=0 && b>=0) cout<<n*a+n*b<<endl;
   else if(a<=0 && b>=0) cout<<n*a+n*b<<endl;
   else {
    int cnt_z=0;
    int curr_z=0;
    int cnt_o=0;
    int curr_o=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            curr_o=0;
            if(curr_z==0) {curr_z=1; cnt_z++;}
            else curr_z++;
        }
        else {
            curr_z=0;
            if(curr_o==0) {curr_o=1; cnt_o++;}
            else curr_o++;
        }
    }
    
    
    cout<<n*a+(min(cnt_o,cnt_z)+1)*b<<endl;}


} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    FOR(i,0,t) test();
    

}
 
