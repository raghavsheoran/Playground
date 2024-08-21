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
bool match(string & s, unordered_map<int,vector<int>> & final){
    bool possible=true;
    map<char,vector<int>> mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]].push_back(i); 
        // first character mp[s[i]][0]
        if(final.find(mp[s[i]][0])==final.end()) {possible=false; break;} // no such first character
        else{
            if(mp[s[i]].size()>final[mp[s[i]][0]].size()) {possible=false; break;}
            else{
                int n=mp[s[i]].size();
                if(final[mp[s[i]][0]][n-1]!=i) {possible=false; break;}
            }
        }
    }
    return possible;
}



void test(){
   int n;
   cin>>n;
   map<int,vector<int>> mp;
   for(int i=0; i<n; i++) {
    int k;
    cin>>k;
    mp[k].push_back(i);
   } 
   unordered_map<int,vector<int>> final;
   for(auto it=mp.begin(); it!=mp.end(); it++){
    final[(it->second)[0]]=it->second;
   }
   int k;
   cin>>k;
   for(int i=0; i<k; i++){
    string s;
    cin>>s;
    if(s.length()!=n) cout<<"NO"<<endl;
    else {
    if(match(s,final)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}
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
 
