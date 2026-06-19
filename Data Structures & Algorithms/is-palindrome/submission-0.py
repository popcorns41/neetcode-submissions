class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = (''.join([c for c in s if c.isalnum()])).lower()
        n = len(s)
        firstHalf = s[0:n//2]
        secondHalf = s[n//2:n]
        secondHalf = secondHalf[::-1]
        otherSecondHalf = secondHalf[:-1:]
    
        return (firstHalf == secondHalf) or (firstHalf == otherSecondHalf)
        