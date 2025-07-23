#include <iostream> // 引入輸出入功能，例如 cout
#include <vector>
#include <unordered_map>  // 使用 hash map（unordered_map）

using namespace std;  // 使用標準命名空間，讓後面可以直接寫 cout、vector 等，不需要加 std::

class Solution {  //類別定義要加; 函式定義不需(不能)加
public:
    vector<int> twoSum(vector<int>& nums, int target) {  // & 不會複製整份 nums
        unordered_map<int, int> num_map;  // 用來記錄數字與其對應的索引

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];  // 計算目標值與目前數字的差值

            // 如果差值已存在於 map 中，代表找到答案
            if (num_map.find(complement) != num_map.end()) {  // 指向 num_map 最後一個元素後面的位置」的 iterator，這個位置是不存在的元素
                return {num_map[complement], i};  // 回傳兩個索引
            }

            // 將目前的數字與索引存入 map
            num_map[nums[i]] = i;
        }

        // 根據題目設定，這行理論上不會被執行（一定有解）
        return {};
    }
};

// int main() 是唯一被標準保證的主函式形式, return 0代表成功, 其他代表失敗ex: return 1
// 回傳 int 讓系統知道是否成功或失敗
int main() {  
    Solution sol;
    vector<int> nums = {2, 5, 5, 11};
    int target = 10;

    vector<int> result = sol.twoSum(nums, target);
    // cout(console output), 全名是 std::cout，但因為有 using namespace std;，所以可以直接寫 cout
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    // '<<'為輸出, endl: 換行(等同於'\n'，但 endl 會多強制清空輸出緩衝區(flush), 確保畫面馬上更新)

    return 0;
}
