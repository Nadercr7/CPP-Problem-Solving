class Solution(object):
    def majorityElement(self, nums):
        freq_map = {}
        n = len(nums)
        
        for i in nums:
            if i in freq_map:
                freq_map[i] += 1
            else:
                freq_map[i] = 1
        
        for i in freq_map:
            if freq_map[i] > n / 2:
                return i
