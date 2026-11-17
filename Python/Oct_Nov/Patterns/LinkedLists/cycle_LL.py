from typing import Optional

# create a node
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# build linkedlist
def buildLL(values, pos=-1):
    dummy = ListNode()
    tail = dummy
    cycleNode = None

    for i, num in enumerate(values): 
        newNode = ListNode(val=num) # create new node with val of num
        tail.next = newNode # connect node to previous node
        tail = tail.next # move tail along
        if i == pos: # i starts at 0
            cycleNode = newNode

    if pos != -1:
        tail.next = cycleNode
        
    return dummy.next # return head of list

class Solution:
    def containCycle(self, head: Optional[ListNode]) -> bool:
        curr = head # set curr at head (use curr as slow ptr)
        fast = curr # init fast pointer

        while fast and fast.next:
            curr = curr.next # type: ignore
            fast = fast.next.next
            if curr is fast:
                return True

        return False

    # time: O(n)
    # space: O(1) just two pointers no matter how long the list gets

    # logically you know it has a cycle if the fast pointer equals the slow pointer at any point

if __name__ == "__main__":
    values = [1,2,3,4,5]
    pos = -1
    linkedList = buildLL(values, pos)
    print(Solution().containCycle(linkedList))
