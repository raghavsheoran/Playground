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
vector<vector<int>> buildCumulativeFrequency(const string& s) {
    int n = s.size();
    vector<vector<int>> cumulativeFreq(n + 1, vector<int>(26, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            cumulativeFreq[i + 1][j] = cumulativeFreq[i][j];
        }
        cumulativeFreq[i + 1][s[i] - 'a']++;
    }
    return cumulativeFreq;
}

int minOperationsToSortEqual(const string& a, const string& b, int l, int r,
vector<vector<int>> & cumulativeA, vector<vector<int>> & cumulativeB
) {
    
    
        
        int freqDiff = 0;

        for (int j = 0; j < 26; ++j) {
            int countA = cumulativeA[r][j] - cumulativeA[l - 1][j];
            int countB = cumulativeB[r][j] - cumulativeB[l - 1][j];
            freqDiff += abs(countA - countB);
        }
        return freqDiff/2;
   

    
}
//---------------------------------------------------------------------------//
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t; // For single test case remove this one
    //t=1; // And use this one
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        vector<vector<int>> cumulativeA = buildCumulativeFrequency(a);
        vector<vector<int>> cumulativeB = buildCumulativeFrequency(b);
        for(int i=0; i<k; i++){ 
            int l,r;
            cin>>l>>r;
            cout<<minOperationsToSortEqual(a,b,l,r,cumulativeA,cumulativeB)<<endl;}
    }
    

}
 
