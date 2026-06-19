class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        def containsDupsCheck(arr):
            seen = set()
            for x in arr:
                if x in seen:
                    return True
                else:
                    seen.add(x)
            return False
         
        n = len(board)
        m = len(board[0])

        #rows check

        for r in board:
            compressed = [x for x in r if x != "."]
            if containsDupsCheck(compressed):
                return False
            
        
        #columns check

        for c in range(m):
            compressed = [r[c] for r in board if r[c] != "."]
            if containsDupsCheck(compressed):
                return False
        
        #3x3 squares check

        for i in range(0,9,3):
            for j in range(0,9,3):
                compressed = [board[r][c] for r in range(i,i+3) 
                    for c in range(j,j+3)
                    if board[r][c] != "."]
                if containsDupsCheck(compressed):
                    return False
        
        return True
                
            
                
        