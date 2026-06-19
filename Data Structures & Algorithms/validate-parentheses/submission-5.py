class Solution:
    def isValid(self, s: str) -> bool:
        pran = {"(":")","[":"]","{":"}"}
        res = []

        for i in s:
            if i in pran:
                res.append(i)
            elif i in pran.values():
                if not res or pran[res.pop()] != i:
                    return False
        
        return len(res) == 0

            
        

       