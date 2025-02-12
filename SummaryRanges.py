class Solution(object):
    def summaryRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        prev = float('inf')
        ranges = []
        for num in nums:
            if num != prev + 1:
                ranges.append([num,num])
            else:
                ranges[-1][1] = num

            prev = num

        return ["{}->{}".format(a, b) if a != b else "{}".format(a) for a, b in ranges]