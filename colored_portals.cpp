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
bool has_common(string & a,string & b){
    return a[0]==b[0] || a[0]==b[1] || a[1]==b[0] || a[1]==b[1];
}

void test(){
  int n,q;
  cin>>n>>q;
  vector<string> city(n);
  for(int i=0; i<n; i++) cin>>city[i];
  unordered_map<string,int> mp;
  vector<string> ref = {"GR","BR","RY","BG","GY","BY"};
  for(int i=0; i<ref.size(); i++){
    sort(ref[i].begin(),ref[i].end());
    mp[ref[i]]=-1;
  }
  vector<vector<int>> nums_left(6,vector<int> (n,-1));
  vector<vector<int>> nums_right(6,vector<int> (n,-1));
  
  for(int i=0; i<n; i++){
    sort(city[i].begin(),city[i].end());
    mp[city[i]]=i;
    nums_left[0][i]=mp["GR"];
    nums_left[1][i]=mp["BR"];
    nums_left[2][i]=mp["RY"];
    nums_left[3][i]=mp["BG"];
    nums_left[4][i]=mp["GY"];
    nums_left[5][i]=mp["BY"];
  }
  for(int i=n-1; i>=0; i--){
    sort(city[i].begin(),city[i].end());
    mp[city[i]]=i;
    nums_right[0][i]=mp["GR"];
    nums_right[1][i]=mp["BR"];
    nums_right[2][i]=mp["RY"];
    nums_right[3][i]=mp["BG"];
    nums_right[4][i]=mp["GY"];
    nums_right[5][i]=mp["BY"];
  }

  for(int i=0; i<q; i++){
    ll a,b;
    cin>>a>>b;
    a--;
    b--;
    if(has_common(city[a],city[b])){cout<<abs(a-b)<<endl;}
    else{
        ll res=LLONG_MAX;
        for(int i=0; i<6; i++){
            if(ref[i]!=city[a] && ref[i]!=city[b]){
                ll left=nums_left[i][a];
                ll right=nums_right[i][a];
                if(nums_left[i][a]!=-1) res=(abs(left-a)+abs(left-b));
                if(nums_right[i][a]!=-1) res=min(res,(abs(right-a)+abs(right-b)));
            }
        }
        if(res!=LLONG_MAX) cout<<res<<endl;
        else cout<<-1<<endl;
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
 
