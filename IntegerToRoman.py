class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        rules = {4: "IV", 9: "IX", 40: "XL", 90: "XC", 400: "CD", 900:"CM"}
        normal = {1000: "M", 500: "D", 100: "C", 50: "L", 10: "X", 5: "V", 1: "I"}
        s = str(num)
        place = len(s)-1
        nums = []
        roman = ""
        normal_sorted = sorted(normal.keys(), reverse=True)

        for letter in s:
            n = int(letter)
            n = n*pow(10,place)
            nums.append(n)
            place -= 1
            print(n)

        
        sum = 0
        
        for number in nums:
            if number in rules:
                roman = roman + rules[number]
            else:
                partial_num = number
                while partial_num > 0:
                    for x in normal_sorted:
                        print(normal[x])
                        if x <= partial_num:
                            roman = roman + normal[x]
                            partial_num -= x
                            break

        return roman
        