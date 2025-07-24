class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        str_x = str(x)
        return str_x == str_x[::-1]  # 判斷是否等於反轉後的自己
    
        ''' math
        # 負數或最後一位為0（但不是0本身）不可能是回文
        if x < 0 or (x % 10 == 0 and x != 0):
            return False

        reversed_half = 0
        while x > reversed_half:
            reversed_half = reversed_half * 10 + x % 10
            x //= 10

        # 若數字長度為奇數，中間那位不用比，因此要 // 10
        return x == reversed_half or x == reversed_half // 10
        '''

# 測試
sol = Solution()
print(sol.isPalindrome(121))  # True
print(sol.isPalindrome(123))  # False
