class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        str_x = str(x)
        quo, rem = divmod(len(str_x), 2)
        if rem == 1:
            first_x = str_x[:quo+1]
        else:
            first_x = str_x[:quo]
        sencond_x = str_x[quo:]
        rev_sencond_x = sencond_x[::-1]
        bool_pal = False
        bool_pal = first_x == rev_sencond_x
        print(bool_pal)
        return bool_pal




sol = Solution()
sol.isPalindrome(x=121)
