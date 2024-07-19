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
bool is_prime(char c){
        return (c=='2' || (c=='3' || (c=='5' || c=='7')));
    }


void test(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int pos=-1;
    for(int i=0; i<n; i++){
        if(s[i]=='1' || !is_prime(s[i])){pos=i; break;}
    }
    if(pos!=-1){
        cout<<1<<endl;
        cout<<s[pos]<<endl;
    }
    else{ // all 2,3,5,7
    unordered_map<char,int> mp;
    bool two=false;
    for(int i=0; i<n; i++) {mp[s[i]]++; if(mp[s[i]]==2) {two=true; break;}}
    if(two){
        cout<<2<<endl;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second==2){cout<<it->first<<it->first<<endl;}
        }
    }
    else{
        cout<<2<<endl;
        cout<<s[0];
        for(int i=1; i<n; i++){
            if(s[0]=='2' && s[i]!='3'){cout<<s[i]<<endl; break;}
            if(s[0]=='3' && s[i]!='7'){cout<<s[i]<<endl; break;}
            if(s[0]=='5' && s[i]!='3'){cout<<s[i]<<endl; break;}
            if(s[0]=='7' && s[i]!='3'){cout<<s[i]<<endl; break;}
        }
    }
    }

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    FOR(i,0,t) test();
    

}
 
