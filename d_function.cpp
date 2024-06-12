#include <iostream>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

long long digitSum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        
        long long low = pow(10, l);
        long long high = pow(10, r);
        long long count = 0;
        
        if (k % 9 == 0) {
            count = (high - low) % MOD;
        } else {
            for (long long n = low; n < high; ++n) {
                if ((k * digitSum(n)) % 9 == digitSum(k * n) % 9) {
                    count = (count + 1) % MOD;
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
