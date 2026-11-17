class MinStack:
    def __init__(self):
        self.stack = []
        self.minStack = []

    def push(self, val):
        if not self.minStack or val < self.minStack[-1]: # if minStack is empty or val is less than top of minStack, this is the new min so push
            self.minStack.append(val) # new min
        else: # otherwise, not empty or not new min so just reappend the curr min
            self.minStack.append(self.minStack[-1])
        self.stack.append(val)

    def pop(self):
        self.stack.pop()
        self.minStack.pop()

    def top(self):
        return self.stack[-1]

    def getMin(self):
        return self.minStack[-1]
        
