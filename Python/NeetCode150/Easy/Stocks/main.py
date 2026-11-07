class Solution:
    def findMaxProfit(self, prices: list[int]) -> int:
        # set first ele to min price
        minPrice = prices[0]
        # init maxProfit = 0
        maxProfit = 0

        # for each price if price is less than min price, re-set min price
        for price in prices:
            if price < minPrice:
                minPrice = price
            
            # profit is each price - min price
            profit = price - minPrice

            if profit > maxProfit:
                maxProfit = profit
        
        return maxProfit
    
if __name__ == "__main__":
    s = Solution()
    prices = [10,8,7,5,2]

    print(s.findMaxProfit(prices))