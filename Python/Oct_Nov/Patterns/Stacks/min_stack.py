class MinStack:
    def __init__(self): 
        self.stack = [] # init the stack
        self.minStack = [] # init minStack

    def push(self, val):
        self.stack.append(val)
        if not self.minStack:
            self.minStack.append(val)
        else:
            self.minStack.append(min(val, self.minStack[-1])) # if val is smaller, append the val otherwise append the previous minimum (top of minStack)

    def pop(self):
        self.stack.pop()
        self.minStack.pop()

    def top(self):
        return self.stack[-1]

    def getMin(self):
        # O(n) would be return min(self.stack)
        # but need O(1)
        # maintain a second stack that is like the first
        return self.minStack[-1]

if __name__ == "__main__":
    c = MinStack()
    c.push(-2)
    c.push(0)
    c.push(-3)
    print(c.getMin())
    c.pop()
    print(c.top())
    print(c.getMin())
