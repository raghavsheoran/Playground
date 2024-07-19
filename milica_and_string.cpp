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
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0; i<n; i++){
        if(s[i]=='A') a++;
        else b++;
    }
    if(b==k) cout<<0<<endl;
    else{
        int pos;
        bool replace_a=false;
        bool replace_b=false;
        for(int i=0; i<n; i++){
            if(s[i]=='B') b--;
            if(b+(i+1)==k){pos=i; replace_b=true; break;}
            else if(b==k){pos=i; replace_a=true; break;}
        }
        cout<<1<<endl;
        if(replace_a) cout<<pos+1<<" "<<"A"<<endl;
        else cout<<pos+1<<" "<<"B"<<endl;
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
 
