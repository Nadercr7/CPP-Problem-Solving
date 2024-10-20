class Solution(object):
    def minAddToMakeValid(self, s):
        x = 0
        open_needed = 0

        for i in range(len(s)):
            if s[i] == '(':
                x += 1
            elif s[i] == ')':
                if x > 0:
                    x -= 1
                else:
                    open_needed += 1

        return open_needed + x
