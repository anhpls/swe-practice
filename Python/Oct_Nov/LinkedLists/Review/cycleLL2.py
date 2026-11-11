from typing import Optional
# Nodes
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Build List function
def buildLL(values, pos):
    dummy = ListNode()
    tail = dummy
    cycleNode = None

    for i, num in enumerate(values):
        newNode = ListNode(val=num)
        tail.next = newNode
        tail = tail.next
        if i == pos:
            cycleNode = newNode

    if pos != -1: # since it has a cycle 
        tail.next = cycleNode # set cycle to begin at tail.next

    return dummy.next

# Print List
def printLL(head):
    curr = head

    while curr:
        print(f"{curr.val} -> ", end="")
        curr = curr.next

    print("None")

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = slow

        while fast and fast.next:
            fast = fast.next.next # move ptr
            slow = slow.next # type: ignore # move ptr
            if fast == slow:
                return True

        return False

if __name__ == "__main__":
    print(Solution().hasCycle(buildLL([1, 3, 5, 6, 7], -1)))
