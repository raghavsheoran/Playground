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
#include <unordered_map>
#include <unordered_set>
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
#define FOR(a,b) for(int i=a; i<b; i++) // upper limit excludes
#define ROF(a,b) for(int i=b; i>=0; i--) // both limits included
//---------------------------------------------------------------------------//
#define sz(x) int(size(x)) // typecated to int
#define bg begin()
#define all(x) bg(x), end(x)
#define SORT(x) sort(all(x))
#define pb push_back
//---------------------------------------------------------------------------//
void test(){
    int m,n;
    cin>>m>>n;
    vector<vector<char>> vec(m,vector<char>(n));
    int r_min=INT_MAX;
    int r_max=INT_MIN;
    int c_min=INT_MAX;
    int c_max=INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>vec[i][j];
            if(vec[i][j]=='#'){
                r_min=min(r_min,i);
                c_min=min(c_min,j);
                r_max=max(r_max,i);
                c_max=max(c_max,j);
            }
        }
    }
    cout<<(r_max+r_min)/2+1<<" "<<(c_max+c_min)/2+1<<endl;

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    //t=1;
    cin>>t;
    FOR(0,t) test();
    int n;

}
 
