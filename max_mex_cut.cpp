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
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int res=0;
    bool one=false;
    bool zero=false;
    bool last_zero=false;
    for(int i=0; i<n; i++){
        if(s[i]=='0' || t[i]=='0') zero=true;
        if(s[i]=='1' || t[i]=='1') one=true;

        if(zero && one){ // MEX will be two and we should consider it
            res+=2;
            one=false;
            zero=false;
            last_zero=false;
        }
        else if(zero){
            res+=1;
            one=false;
            zero=false;
            last_zero=true;
        }
        else{
            if(last_zero) {
                res+=1;
                one=false;
                zero=false;
                last_zero=false;
            }

        }
    }
    cout<<res<<endl;


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
 
