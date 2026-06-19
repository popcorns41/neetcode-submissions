import math
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        zeroCheck = [i for i,x in enumerate(nums) if x == 0]
        if len(zeroCheck) >= 2:
            return [0]*len(nums)
        numsExcludingZero = [x for x in nums if x != 0]
        totNonZeroProd = math.prod(numsExcludingZero)
        totZeroProd = math.prod(nums)
        return [totZeroProd // x if x != 0 else totNonZeroProd for x in nums]
        