class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x = str(x)
        tall = len(x)
        
        for i in range(tall // 2):
            if x[i] != x[tall - i - 1]:
                return False
        return True
