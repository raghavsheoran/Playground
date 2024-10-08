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
    int n,m,k;
    cin>>n>>m>>k; // n mtrs // m mtr max jump // at max k mtr in water
    string s="L";
    string temp;
    cin>>temp;
    s+=temp;
    s+="L"; // added log at begin and end
    
    int curr=0; // the current position // at log
    bool possible=true;
    while(curr<=n){ 
      // either it is a log 
      if(s[curr]=='L'){
         // can go to curr+k
         int temp=min(curr+m,n+1);
         while(s[temp]!='L') temp--; // will find the last log
         if(temp==curr){ // no logs in curr+1 to curr+k
          temp=min(curr+m,n+1);
          while(s[temp]!='W' && temp>curr) temp--;
          }
           // not even water present
          if(temp==curr){possible=false; break;}
         
         // hence now I am either at a log or water
          curr=temp;
          if(curr==n+1){break;} // reached last 
        
      }
      
      // or it is water
      // or it is croc
      while(s[curr]=='W'){
          if(k<=0) {possible=false; break;}
          else { k--; curr++;}
          if(curr==n+1){break;} 
         }
      if(!possible) break;
        
      if(s[curr]=='C'){
          possible=false; break;
         }
         
    }
    if(possible) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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
 
