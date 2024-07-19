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
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin>>nums[i];
    string res;
    int prev=-1; // prev index of number added
    int rule_break=0; // number of rules broken
    for(int i=0; i<n; i++){ // tranversing
        if(prev==-1){ // first number to be added
            res+='1';
            prev=i; // the number has been added
        }
        else{ // second to last
            if(nums[i]>=nums[prev]){ // add this number since the array will be non dedcreasing
            if(rule_break==0){
            res+='1';
            prev=i;
            }
            else{
             // first rule break done
            if(nums[i]<=nums[0]){
                res+='1';
                prev=i;
                }
                else{
                    res+='0';
                }
            }
            }
            else{ // it is smaller than the previos number added
            if(rule_break==0){
                if(nums[i]<=nums[0]){
                rule_break+=1;
                res+='1';
                prev=i;
                }
                else{
                    res+='0';
                }
            }
            else{ // not allowed
                res+='0';
            }

            }

        }
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
 
