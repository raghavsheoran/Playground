// Author - Raghav Sheoran
// CodeForces Handle - raghav.sheoran
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

// Constants
const int MOD = 1000000007;

//---------------------------------------------------------------------------//
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int>
#define FOR(i,a,b) for(int i=a; i<b; i++) // upper limit excludes

void test() {
    string s;
    cin >> s;
    map<int, ll> mp_final; // the updated solution
    mp_final[0]=1;
    
    ll z = 0, o = 0;
    ll res = 0;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '0') z++;
        else o++;
        
        int diff = z - o;
        
        if(mp_final.find(diff) != mp_final.end()) {
            
            ll right_part=s.length()-i;
            res+=(mp_final[diff]*right_part)%MOD;
        }
        
        
        mp_final[diff]+=i+2;
    }
    
    cout << res%MOD << endl;
}

//---------------------------------------------------------------------------//
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t; // For single test case, use this
    //t = 1; // And use this one
    
    FOR(i, 0, t) test();
    
    return 0;
}
