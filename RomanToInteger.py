class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        rules = {"IV": 4,"IX": 9,"XL": 40,"XC": 90,"CD": 400,"CM": 900}
        normal = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        sum = 0
        for rule in rules:
            if rule in s:
                sum += rules[rule]
                s = s.replace(rule, "")

        for letter in s:
            sum += normal[letter]

        return sum
        

        