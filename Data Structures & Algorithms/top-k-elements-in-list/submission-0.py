from collections import defaultdict

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqCount = defaultdict(int)

        for x in nums:
            freqCount[x] += 1
        
        sortedCount = {k:v for k,v in sorted(freqCount.items(),reverse=True, 
            key=lambda item:item[1])}
        
        orderedElements = list(sortedCount.keys())
        return [orderedElements[i] for i in range(k)]
        



        