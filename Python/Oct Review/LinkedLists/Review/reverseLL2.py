from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# .next to relink
# dont need dummy var because it'll relink each existing node 
# save
# flip
# move prev to curr
# move curr ahead

def buildLL(values):
    dummy =  ListNode()
    tail = dummy

    for num in values:
        newNode = ListNode(val=num)
        tail.next = newNode # link created node
        tail = tail.next # move tail forward

    return dummy.next # head of list

def printLL(head):
    curr = head

    while curr:
        print(f"{curr.val} -> ", end="")
        curr = curr.next
        
    print("None")
    

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        prev = None

        # 1 -> 2 -> 3
        # <- 1   2 -> 3
        while curr:
            nextNode = curr.next # 2 ->
            curr.next = prev # <- 1
            prev = curr
            curr = nextNode

        return prev

if __name__ == "__main__":
    theLL = buildLL([1,2,3])
    printLL(theLL)
    printLL(Solution().reverseList(theLL))


# time: O(n) 
# space: O(1) set of constant vars just getting overwritten
