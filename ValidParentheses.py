class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        stack = []

        for letter in s:
            try:
                match letter:
                    case "(" | "[" | "{":
                        stack.append(letter)
                    case ")":
                        if(stack.pop() != "("):
                            return False
                    case "]":
                        if(stack.pop() != "["):
                            return False
                    case "}":
                        if(stack.pop() != "{"):
                            return False
            except IndexError:
                return False


        return (len(stack) == 0)