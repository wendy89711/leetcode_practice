#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // 負數或末尾為0（但不是0本身）不可能為回文數
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed_half = 0;
        while (x > reversed_half) {
            reversed_half = reversed_half * 10 + x % 10;
            x /= 10;  // x = x / 10
        }

        // 如果是偶數長度，x == reversed_half
        // 如果是奇數長度，中間一位無需比較（去掉 reversed_half 最後一位）
        return x == reversed_half || x == reversed_half / 10;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.isPalindrome(121) << endl;    // true
    cout << boolalpha << sol.isPalindrome(12321) << endl;  // true
    cout << boolalpha << sol.isPalindrome(123) << endl;    // false
    return 0;
}
