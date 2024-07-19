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
#define pl pair<ll, ll>
#define pd pair<ld, ld>
#define pi pair<int, int>
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
#define FOR(i, a, b) for (int i = a; i < b; i++)  // upper limit excludes
#define ROF(i, a, b) for (int i = b; i >= 0; i--) // both limits included
//---------------------------------------------------------------------------//
#define sz(x) int(size(x)) // typecated to int
#define bg begin()
#define all(x) bg(x), end(x)
#define SORT(x) sort(all(x))
#define pb push_back
//---------------------------------------------------------------------------//
bool is_valid(int i, int j)
{
    return i >= 0 && j >= 0 && i < 3 && j < 3;
}

void test()
{
    vector<int> d_r = {-1, 0, 1};
    vector<int> d_c = {-1, 0, 1};
    
    string res="ZZZ";
    vector<string> vec(3);
    for (int i = 0; i < 3; i++)
        cin >> vec[i];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // starting character
            string curr = vec[i].substr(j, 1);
            // lets choose first character
            char min_char = 'Z'; // for the scope of second character
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    if (x == 1 && y == 1)
                        continue;
                    int r = i + d_r[x];
                    int c = j + d_c[y];
                    if (is_valid(r, c))
                        min_char = min(min_char, vec[r][c]);
                }
            }
            curr += min_char; // second character added
            char min_third = 'Z';
            for (int x = 0; x < 3; x++)
            {
                for (int y = 0; y < 3; y++)
                {
                    if (x == 1 && y == 1)
                        continue;
                    int r = i + d_r[x];
                    int c = j + d_c[y];
                    if (is_valid(r, c) && curr[1]==vec[i][j]){ // possible second character
                    // with coordinate r and c
                    for(int a=0; a<3; a++){
                        for(int b=0; b<3; b++){
                            if(a==1 && b==1) continue;
                            int n_r=r+d_r[a];
                            int n_c=c+d_c[b];
                            if(is_valid(n_r,n_c) && (n_r!=i && n_c!=j)) min_third=min(min_third,vec[n_r][n_c]);
                        }
                    }

                    }
                       
                }
            }
            curr+=min_third;
            
            
            
            
            res=min(res,curr);
        }
    }
    cout<<res<<endl;
}
//---------------------------------------------------------------------------//
int main()
{
    int t;
    t=1;
    FOR(i, 0, t)
    test();
}
