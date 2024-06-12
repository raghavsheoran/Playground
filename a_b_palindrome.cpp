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
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n=a+b;
    int z=0,o=0;
    int l=0,r=n-1;
    bool possible=true;
    int option=0;
    while(l<r){
        if(s[l]!=s[r]){ // either 
            if(s[l]=='?'){ // no other option
                if(s[r]=='1') {o++; s[l]='1'; o++;}
                if(s[r]=='0') {z++; s[l]='0'; z++;}

            }
            else if(s[r]=='?'){ // no other option
               if(s[l]=='1') {o++; s[r]='1'; o++;}
               if(s[l]=='0') {z++; s[r]='0'; z++;}
            }
            else{
                possible=false;
                break;
            }
        }
        else{
            if(s[l]=='1' || s[l]=='0') continue;
            else option+=2;
        }
        l++;
        r--;
    }
    if(l==r){
       if(s[l]=='?') option++;
       else if(s[l]=='1') o++;
       else z++;
    }
    if(possible==false) cout<<"NO"<<endl;
    else{
        if(z==a && o==b) cout<<"YES"<<endl;
        else{
            if(option==0) cout<<"NO"<<endl;
            else{
                if(z<=a && o<=b) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    

} 
//---------------------------------------------------------------------------//
int main(){
    int t;
    //t=1;
    cin>>t;
    FOR(0,t) test();
    

}
 
