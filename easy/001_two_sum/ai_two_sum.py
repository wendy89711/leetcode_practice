class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        num_dic = {}

        for i, num in enumerate(nums):
            complement = target - num

            # 如果該數字已經在字典中，則找到了答案
            if complement in num_dic:
                return [num_dic[complement], i]
            
            # 如果沒有找到，將當前數字及其索引加入字典
            num_dic[num] = i
        
        # 如果循環結束還沒找到，根據題意這裡不會執行
        return []

    
sol = Solution()
nums = [2,5,5,11]
target = 10
print(sol.twoSum(nums, target))
