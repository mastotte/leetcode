class Solution:
    def maximumSum(self, nums: List[int]) -> int:

        max_sum = float('-inf')
        digit_sums = []
        for num in nums:
            str_num = str(num) #not python
            d_sum = 0
            for digit in str_num:
                d_sum += int(digit)

            digit_sums.append(d_sum)
        
        # weed out redundant sums of minimal value
        # they will never be used
        visited = []
        for Sum in digit_sums:
            if Sum in visited:
                continue

            top_2_values = [0,0]
            start = 0

            while start < len(digit_sums):
                try:
                    index = digit_sums.index(Sum, start)
                except ValueError:
                    break
                start = index + 1
                
                # only replace the lowest value in the top 2
                min_index = top_2_values.index(min(top_2_values))

                num = nums[index]
                if(num > top_2_values[min_index]):
                    top_2_values[min_index] = num
            
            # add best values to optomized list
            visited.append(Sum)

            # check that both values are filled in a multiple copies of Sum exist
            s = -1 if top_2_values[1] == 0 else sum(top_2_values)

            max_sum = max(s, max_sum)
            
        return max_sum