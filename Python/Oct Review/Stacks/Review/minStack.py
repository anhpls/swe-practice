class MinStack:
    def __init__(self):
        self.stack = []
        self.minStack = []

    def push(self, val):
        self.stack.append(val) 
        if not self.minStack or self.minStack[-1] > val: # if minStack is empty or top is bigger than val
            self.minStack.append(val) # append val bc its new minimum
        else: # otherwise 
            self.minStack.append(self.minStack[-1]) # append minStack's previous minimum

    def pop(self):
        self.stack.pop()
        self.minStack.pop()

    def top(self):
        return self.stack[-1]

    def getMin(self):
        return self.minStack[-1]
