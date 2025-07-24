#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman_alpha = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int total = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (i < s.length()-1 && roman_alpha[s[i+1]] > roman_alpha[s[i]]) {
                total -= roman_alpha[s[i]];
            } else {
                total += roman_alpha[s[i]];
            }
        }
        return total;
    }
};

int main() {
    Solution sol;
    int ans = sol.romanToInt("MCMXCIV");
    cout << ans << endl;
    return 0;
}
