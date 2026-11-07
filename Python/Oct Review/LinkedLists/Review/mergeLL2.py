# need dummy var
# dummy -> (compare a and b for which one is less and attach it to dummy) 

from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def printLL(head):
    curr = head

    while curr:
        print(f"{curr.val} -> ", end="")
        curr = curr.next

    print("None")

def buildLL(values):
    dummy = ListNode()
    tail = dummy

    for num in values:
        newNode = ListNode(val=num)
        tail.next = newNode
        tail = tail.next

    return dummy.next # head of list

class Solution:
    def mergeLists(self, a: Optional[ListNode], b: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        tail = dummy # pointer

        while a and b:
            if a.val < b.val:
                tail.next = a
                tail = tail.next
                a = a.next
            else:
                tail.next = b
                tail = tail.next
                b = b.next

        # any leftover on either lists get attached
        if a:
            tail.next = a
        else:
            tail.next = b

        return dummy.next

if __name__ == "__main__":
    a = [1, 2, 3]
    b = [1, 3, 4, 5, 7]
    printLL(Solution().mergeLists(buildLL(a), buildLL(b)))

# time: O(n + m) because iterates over each list
# space: O(1) because rewiring nodes, not creating new ones
