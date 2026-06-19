class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False
        #open to closed
        bracketMapping = {"(":")","{":"}","[":"]"}
        stack = []
        for c in s:
            if c in bracketMapping.keys():
                stack.append(c)
            else:
                if not stack:
                    return False
                val = stack.pop()
                if  bracketMapping[val] != c:
                    return False
        return True if not stack else False

            
        

       