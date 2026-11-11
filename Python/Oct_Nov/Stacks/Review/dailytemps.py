class Solution:
    def answer(self, temperatures: list[int]) -> list[int]:
        stack = []
        answer = [0] * len(temperatures)

        for i, temp in enumerate(temperatures):
            while stack and temp > temperatures[stack[-1]]:
                j = stack.pop() # while stack exists and the current temp is higher than the back of the line temp, then pop the index of the back of the lined
                answer[j] = i - j

            stack.append(i)

        return answer

if __name__ == "__main__":
    temperatures = [73,74,75,71,69,72,76,73]
    print(Solution().answer(temperatures))
