class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = s.replace(" ","")
        s = s.lower()
        s = re.sub(r'[^a-zA-Z0-9]', '', s)
        print(s)
        for i in range(len(s) / 2):
            if(s[i] != s[-(i+1)]):
                return False
        
        return True