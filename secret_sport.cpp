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
    string s;
    cin>>s;
    int a=0,b=0;
    for(int x=n; x>=1; x--){ 
        int a_win=0;
        int b_win=0;
        int score_a=0;
        int score_b=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='A') score_a++;
            else score_b++;
            if(score_a==x){a_win++; score_a=0; score_b=0;}
            if(score_b==x){b_win++; score_a=0; score_b=0;}
        }
        if(a_win>b_win && score_a==0 && score_b==0 && s[n-1]=='A') {a++; }
        if(b_win>a_win && score_a==0 && score_b==0 && s[n-1]=='B') {b++; }


    }
    
    if(a>0 && b==0) cout<<"A"<<endl;
    else if(b>0 && a==0) cout<<"B"<<endl;
    else cout<<"?"<<endl;

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
 
