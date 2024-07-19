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
    cin>>n>>m>>k;
    string s="L";
    string temp;
    cin>>temp;
    s+=temp;
    s+="L";
    
    bool possible=true;
    int i;
    for(i=0; i<s.length(); i++){
      if(s[i]=='L'){ // log present
        while(i+1<s.length() && s[i+1]=='L') i++; // we now came to the last log
        int ref=i; // last log
        int pos=i+m; // if I might jump all
        for(int j=i+1; j<=pos && j<s.length(); j++){
            if(s[j]=='L') i=j; // we go to the next area where there is a log
        }
        if(i==ref){ // hasnt moved
         for(int j=i+1; j<=pos && j<s.length(); j++){
            if(s[j]=='W') i=j; // we go to the next area where there is a log
        }
        if(i==ref && i!=s.length()-1) {possible=false; break;   }
        }

        }
        if(s[i]=='W'){
        // we will have to swim
        if(k==0) {possible=false; break;}
        else k--;
        
      }
       else if(s[i]=='C') {possible=false; break;} // we encoundered a crocodile

      
      if(i==s.length()-1) break;
      
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
 
