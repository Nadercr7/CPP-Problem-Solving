class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        word11,word22 ="",""
        for i in (word1) :
            word11 += i
        for i in (word2) :
            word22 += i
        return word11 == word22
        """
        :type word1: List[str]
        :type word2: List[str]
        :rtype: bool
        """
        
