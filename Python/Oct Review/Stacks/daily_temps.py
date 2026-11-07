'''
Daily Temperatures

Given an array of integers temperatures (the daily temperatures), return an array answer where answer[i] is the number of days you have to wait after day i to get a warmer temperature. If there’s no future day that’s warmer, answer[i] = 0.

Example 1
Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]
'''
# keep track of previous min and its location and when there's a higher temperature then ssubtract amount 
# answer[i] = # of days to get a warmer temp so indices until temp > currtemp


# monotonic stack pattern

class Solution:
    def dailyTemperatures(self, values: list[int]) -> list[int]:
        stack = []
        answer = [0] * len(values)

        for i, temp in enumerate(values):
            while stack and temp > values[stack[-1]]:
                j = stack.pop()
                answer[j] = i - j
            stack.append(i)

        return answer
