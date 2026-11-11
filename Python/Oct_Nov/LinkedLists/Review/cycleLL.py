# if fast pointer is ever == to slow pointer, theres a cycle
# need pos in build list (-1 means no cycle); since need position, need to use enumerate for the index

from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next 

def buildList(values, pos):
    dummy = ListNode()
    tail = dummy
    cycleNode = None

    for i, num in enumerate(values):
        newNode = ListNode(val=num)
        tail.next = newNode
        tail = tail.next
        if i == pos:
            cycleNode = newNode

    if pos != -1:
        tail.next = cycleNode
    
    return dummy.next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head

        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next # type: ignore
            if fast is slow:
                return True
                
        return False

if __name__ == "__main__":
    values = [1,2,3,4,5,6,7,8]
    pos = -1
    print(Solution().hasCycle(buildList(values, pos)))
