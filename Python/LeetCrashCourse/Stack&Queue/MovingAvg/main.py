from collections import deque

class MovingAverage:
    def __init__(self, size: int):
        self.size = size
        self.window = deque()
        self.currSum = 0
    
    def next(self, val: int) -> float:
        self.currSum += val
        self.window.append(val)

        if len(self.window) > self.size:
            self.currSum -= self.window[0]
            self.window.popleft()

        return self.currSum / len(self.window)