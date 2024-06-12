#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;

ll count_placements(ll x, ll y, ll z, ll k) {
    ll max_placements = 0;
    for (ll a = 1; a * a * a <= k; ++a) {
        if (k % a == 0) {
            ll ab = k / a;
            for (ll b = 1; b * b <= ab; ++b) {
                if (ab % b == 0) {
                    ll c = ab / b;
                    if (a <= x && b <= y && c <= z)
                        max_placements = max(max_placements, (x - a + 1) * (y - b + 1) * (z - c + 1));
                    if (a <= x && c <= y && b <= z)
                        max_placements = max(max_placements, (x - a + 1) * (y - c + 1) * (z - b + 1));
                    if (b <= x && a <= y && c <= z)
                        max_placements = max(max_placements, (x - b + 1) * (y - a + 1) * (z - c + 1));
                    if (b <= x && c <= y && a <= z)
                        max_placements = max(max_placements, (x - b + 1) * (y - c + 1) * (z - a + 1));
                    if (c <= x && a <= y && b <= z)
                        max_placements = max(max_placements, (x - c + 1) * (y - a + 1) * (z - b + 1));
                    if (c <= x && b <= y && a <= z)
                        max_placements = max(max_placements, (x - c + 1) * (y - b + 1) * (z - a + 1));
                }
            }
        }
    }
    return max_placements;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y, z, k;
        cin >> x >> y >> z >> k;
        cout << count_placements(x, y, z, k) << endl;
    }
    return 0;
}
