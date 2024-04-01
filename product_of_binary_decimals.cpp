#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int> binary_decimals;

void generate_binary_decimals() {
    for (int i = 1; i <= 100000; ++i) {
        int num = i;
        bool is_binary = true;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && digit != 1) {
                is_binary = false;
                break;
            }
            num /= 10;
        }
        if (is_binary) {
            binary_decimals.insert(i);
        }
    }
}

bool can_be_product_of_binary_decimals(int n) {
    if (binary_decimals.count(n)) {
        return true;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0 && can_be_product_of_binary_decimals(i) && can_be_product_of_binary_decimals(n / i)) {
            return true;
        }
    }
    return false;
}

int main() {
    generate_binary_decimals();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (can_be_product_of_binary_decimals(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
