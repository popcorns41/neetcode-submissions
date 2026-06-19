class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l,r = 0, len(nums)-1

        while l < r:
            m = (l + r) // 2
            if nums[m] > nums[r]:
                l = m + 1
            else:
                r = m
            
        pivot = l

        def binary_search(l,r):
            while l <= r:
                m = (l+r) // 2
                if target == nums[m]:
                    return m
                elif target < nums[m]:
                    r = m - 1
                else:
                    l = m + 1
            return -1

        partition1 = binary_search(0,pivot-1)
        partition2 = binary_search(pivot,len(nums)-1)

        return partition1 if partition1 != -1 else partition2
        