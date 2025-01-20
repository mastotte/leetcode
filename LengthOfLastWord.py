class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        strings = s.strip().split(" ")
        return len(strings[-1])
        