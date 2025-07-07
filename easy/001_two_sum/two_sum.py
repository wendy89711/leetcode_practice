class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        index_list = []
        for n in nums:
            ans = target - n
            if ans in nums:
                n_index = nums.index(n)
                ans_index = nums.index(ans)
                if ans != n:
                    index_list.append(n_index)
                    index_list.append(ans_index)
                    break
                else:
                    count_list = []
                    count_list = [i for i,x in enumerate(nums) if x==ans]
                    if len(count_list) == 2:
                        index_list = count_list
                        break
        
        print(index_list)
        return index_list
        

    
sol = Solution()
nums = [2,5,5,11]
target = 10
sol.twoSum(nums, target)
