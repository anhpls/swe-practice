class Solution:
    def buySell(self, prices: list[int]) -> int:
        minPrice = float('inf')
        maxProfit = 0

        for price in prices:
            if price < minPrice:
                minPrice = price
            
            profit = price - minPrice
            
            if profit > maxProfit:
                maxProfit = profit
            
        return maxProfit
    
if __name__ == "__main__":
    s = Solution()

    prices = [7,1,5,3,6,4]

    print(s.buySell(prices))
