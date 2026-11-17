class Solution:
    def dailyTemps(self, temperatures: list[int]) -> list[int]:
        stack = []
        answer = [0] * len(temperatures)

        for i, temp in enumerate(temperatures):
            # compare today's temperature to the back of the line's temperature
            while stack and temp > temperatures[stack[-1]]:
                j = stack.pop() # j's location is saved
                answer[j] = i - j # j's location in answer arr is saved and it took this many days to get a hotter temp
            stack.append(i) # today needs to start waiting

        return answer

if __name__ == "__main__":
    temps = [79, 80, 68, 98]
    print(Solution().dailyTemps(temps))
# time: O(n) 
# space: O(n) answer has n slots 
