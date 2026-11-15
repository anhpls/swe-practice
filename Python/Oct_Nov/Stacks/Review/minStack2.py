class MinStack:
    def __init__(self):
        self.stack = []
        self.minStack = []

    def push(self, val):
        # push onto both stacks to keep levels same; if stack exists  and val < top, new min so push onto minStack; else push the currMin (top of minStack) 
        self.stack.append(val)
        if not self.minStack or val < self.minStack[-1]: # if minStack is empty, or val is less than top of minStack, then this is the new min so push to minStack
            self.minStack.append(val)
        else: # minStack exists so push current min again
            self.minStack.append(self.minStack[-1]) 
        

    def pop(self):
        self.stack.pop()
        self.minStack.pop()

    def top(self):
        return self.stack[-1]

    def getMin(self):
        return self.minStack[-1]



    

