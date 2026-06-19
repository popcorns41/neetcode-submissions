class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        ss = list(s)
        ts = list(t)
        ss.sort()
        ts.sort()
        return ts == ss
        