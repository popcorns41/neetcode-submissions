class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxP = 0
        minBuy = float('inf')

        for stock in prices:
            maxP = max(maxP,stock-minBuy)
            minBuy = min(minBuy,stock)
        return maxP
        