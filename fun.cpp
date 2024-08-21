#include <iostream>

using namespace std;

long long countTriplets(int n, int x) {
    long long count = 0;

    for (int s1 = 1; s1 <= min(x - 2, n); ++s1) {
        for (int s2 = s1; s2 <= min(x - s1 - 1, n / s1); ++s2) {
            int s3 = s1 + s2;
            if (s3 > x) {
                break;
            }
            if (s1 * s2 * s3 > n * (s3 - 2 * (s2 - s1))) {
                break;
            }
            // Debugging: print intermediate values
            
            count += (long long)(s1 - 1) * (s2 - 1) * (s3 - 1);
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << countTriplets(n, x) << endl;
    }

    return 0;
}
