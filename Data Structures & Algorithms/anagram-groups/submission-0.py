class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sortedStrs = [''.join(sorted(x)) for x in strs]
        setSortedStrs = set(sortedStrs)
        indices = {x:i for i,x in enumerate(setSortedStrs)}
        res = [[] for _ in range(len(indices))] 
        
        for i,x in enumerate(sortedStrs):
            res[indices[x]].append(strs[i])

        return res



        