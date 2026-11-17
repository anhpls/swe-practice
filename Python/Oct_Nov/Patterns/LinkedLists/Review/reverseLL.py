from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def printList(head):
    curr = head

    while curr:
        print(f"{curr.val} -> ",end="")
        curr = curr.next

    print("None")

def buildList(values):
    dummy = ListNode()
    tail = dummy

    for num in values:
        newNode = ListNode(val=num)
        tail.next = newNode
        tail = tail.next

    return dummy.next


class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        prev = None

        while curr:
            temp = curr.next #save (2->3->..)
            curr.next = prev #flip (<- 1)
            prev = curr #move (prev needs to move to curr before curr moves)
            curr = temp #move (moves curr to saved nodes that lead forward)

        return prev
            
            # 1 -> 2 // <- 1 2 3 4
            # .next re-links nodes while setting it (ex: curr = temp) moves the pointer to the node

if __name__ == "__main__":
    values = [1,2,3,4,5]
    builtLL = buildList(values)
    printList(builtLL)
    result = Solution().reverseList(builtLL)
    printList(result)
