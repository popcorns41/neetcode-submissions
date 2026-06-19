class Solution:
    def maxArea(self, heights: List[int]) -> int:
        res = float('-inf')
        left,right = 0,len(heights)-1

        while left < right:
            currArea = (right-left) * min(heights[left],heights[right])
            res = max(res,currArea)

            if heights[left] <= heights[right]:
                left += 1
            else:
                right -= 1
        
        return res
        