class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        pointer = 1
        for i,v in enumerate(numbers):
            while pointer < len(numbers):
                if (v + numbers[pointer]) == target:
                    return [i+1,pointer+1]
                pointer += 1
            pointer = i+1

        