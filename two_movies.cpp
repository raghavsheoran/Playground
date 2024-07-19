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
   vector<int> first(n);
   vector<int> second(n);
   int a=0,b=0; // score of movie a // score of movie b
   int x=0,y=0; // both positive // both negative
   for(int i=0; i<n; i++){
    cin>>first[i];
   }
   for(int i=0; i<n; i++){
    cin>>second[i];
   }
   for(int i=0; i<n; i++){
    if((first[i]==-1 && second[i]==-1) || (first[i]==1 && second[i]==1)){ // indecisive
        if(first[i]==1) x++;
        else y++;

    }
    else{
        if(first[i]==1) a+=1;
        else if(second[i]==1) b+=1;
        // else no change
    }
   }
   
   int res=INT_MIN;
   // range of value 
   // max -> +x
   // min -> -y
   for(int i=-1*y; i<=x; i++){
        res=max(res,min(a+i,b+(x-y)-i));
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
 
