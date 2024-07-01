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
    int n,c;
    cin>>n>>c;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq_0;
    for(int i=1; i<=n; i++){
        int temp;
        cin>>temp;
        pq.push({temp+i,i});
        pq_0.push({temp+i,i});
        pq.push({temp+n+1-i,i});
    }
    int res=0;
    if(pq_0.top().first>c){cout<<0<<endl;} // cant start from the left end
    else{
    res++;
    unordered_set<int> st;
    st.insert(pq_0.top().second);
    c-=pq_0.top().first;
    while(pq.empty()==false){ // should not be empty
    while(pq.empty()==false && st.find(pq.top().second)!=st.end()) pq.pop(); // should not be previosly removed
    if(pq.empty()==false){
        if(pq.top().first<=c){
            c-=pq.top().first;
            res++;
            st.insert(pq.top().second);
            pq.pop();
        }
        else break;
    }
    else break;
       
    }
    
    cout<<res<<endl;}

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    FOR(i,0,t) test();
    

}
 
