import math

class Solution:
    def processPackagses(self, docks: list[int], hours: int) -> int:
        # rates
        slow = 1 # process 1 package per hour
        fast = max(docks) # process most packages per hour
        bestRate = fast

        while slow <= fast:
            mid = (slow + fast) // 2 # mid rate
            total = 0 # num of hours worker needs to clear every dock at mid rate
            for dock in docks:
                total = total + math.ceil(dock / mid) # divide dock packages by rate rounded up
            if total > hours: # total hours worker needs > hours allowed so doesn't work; have to move towards faster speed so move left bound to 
                slow = mid + 1
            else: # total hours worker takes <= given hours works; find slower rate 
                bestRate = mid # save the current mid rate as best rate
                fast = mid - 1 # find a slower rate

        return bestRate

