class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        startNums = [x for x in nums if x-1 not in nums]

        maxLength = 0

        for x in startNums:
            count = 1
            while x + count in nums:
                count += 1
            maxLength = max(maxLength,count)

        return maxLength
        
        