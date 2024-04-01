#include <iostream>
#include <string>
using namespace std;

bool can_form(const string& s, int k) {
    if (s.size() % k != 0) return false;

    string pattern = s.substr(0, k);
    int repetitions = s.size() / k;

    // Check if the pattern can form the string without any modification
    if (string(repetitions, pattern[0]) == s) return true;

    // Check if the pattern can form the string with at most one different character
    for (int i = 0; i < k; ++i) {
        string modified = pattern;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (c != pattern[i]) {
                modified[i] = c;
                string concatenated;
                for (int j = 0; j < repetitions; ++j) {
                    concatenated += modified;
                }
                if (concatenated == s) return true;
            }
        }
    }

    // Check if the pattern is a single character that can form the string
    if (k == 1 && repetitions == s.size()) return true;

    return false;
}

int shortest_repeating_length(const string& s) {
    int n = s.size();
    for (int k = 1; k <= n; ++k) {
        if (can_form(s, k)) {
            return k;
        }
    }
    return n; // If no such k is found, the answer is the length of s
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortest_repeating_length(s) << endl;
    }
    return 0;
}
