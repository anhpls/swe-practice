from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def printLL(head):
    curr = head

    while curr:
        print(f"{curr.val} -> ",end="")
        curr = curr.next

    print("None")

def buildLL(values):
    dummy = ListNode()
    tail = dummy

    for num in values:
        newNode = ListNode(num)
        tail.next = newNode
        tail = tail.next
    return dummy.next # head of list

class Solution:
    def mergeLists(self, a: Optional[ListNode], b: Optional[ListNode]) -> Optional[ListNode]:
        # compare first values of each list
        # if a < b, a goes first
        # no need to create a new final list
        # tag on the rest of the remaining list (whichever is left)
        dummy = ListNode()
        tail = dummy

        while a and b:
            if a.val < b.val:
                tail.next = a # link a to dummy
                tail = tail.next # move tail forward
                a = a.next # move a forward
            else:
                tail.next = b
                tail = tail.next
                b = b.next

        if a: # if there's still nodes in a
            tail.next = a # attach a to list
        else: # otherwise b has nodes
            tail.next = b # attach b to list

        return dummy.next # return head of merged list        

# time: O(n + m)
# space: O(1)

if __name__ == "__main__":
    a = [1,2,4]
    b = [1,3,4]
    printLL(Solution().mergeLists(buildLL(a), buildLL(b)))
    printLL(Solution().mergeLists(buildLL([]), buildLL([]))) 
    printLL(Solution().mergeLists(buildLL([]), buildLL([0])))
