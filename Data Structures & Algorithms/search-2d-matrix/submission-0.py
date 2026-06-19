class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        def binary_search(arr,target):
            left = 0
            right = len(arr) - 1
            while left <= right:
                mid = (left + right) // 2

                if arr[mid] == target:
                    return True
                
                if arr[mid] < target:
                    left = mid + 1
                else:
                    right = mid - 1
            return False

        return any([binary_search(r,target) for r in matrix])


        