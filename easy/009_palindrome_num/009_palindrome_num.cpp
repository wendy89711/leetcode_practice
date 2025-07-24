#include <iostream>
#include <string>
#include <algorithm>  // for reverse
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str_x = to_string(x);
        string reverse_x = str_x;
        reverse(reverse_x.begin(), reverse_x.end());
        // 合併: string reversed_x(str_x.rbegin(), str_x.rend());
        return str_x == reverse_x;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.isPalindrome(121) << endl;
    cout << boolalpha << sol.isPalindrome(123) << endl;
    return 0;
}