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
  int k=1;
  vector<vector<int>> mat(n,vector<int>(n));
  if(n==1) cout<<1<<endl;
  else if(n==2) cout<<-1<<endl;
  else{ 
    int row=0;
    for(int i=row; i<n; i+=2){ // the starting row
    if(i==n-1) break; // odd
    bool up=true;
    for(int j=0; j<n; j++){
     if(up) mat[i][j]=k;
     else mat[i+1][j]=k;
     k++;
     up=!up;
    }
    up=false;
    for(int j=0; j<n; j++){
     if(up) mat[i][j]=k;
     else mat[i+1][j]=k;
     k++;
     up=!up;
    }
    }
    if(n%2!=0){
    int l=0;
    int h=n-1;
    while(l<h){
        mat[n-1][l]=k;
        k++;
        l++;
        mat[n-1][h]=k;
        k++;
        h--;

    }
    mat[n-1][l]=k;
    swap(mat[n-1][l],mat[0][l]);
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++) cout<<mat[i][j]<<" ";
   cout<<endl;
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
 
