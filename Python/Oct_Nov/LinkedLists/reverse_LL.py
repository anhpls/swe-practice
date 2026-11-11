from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head # curr = 1
        prev = None # prev = none

        while curr: # while the current node still exists
            nxtNode = curr.next # save the rest of list (2 -> 3 -> 4 -> 5)(save)
            curr.next = prev # then reverse the list (   <- 1 2 -> 3..) (flip)
            prev = curr # (prev = curr)
            curr = nxtNode # 2 -> 1

        return prev


        # head = [1, 2, 3, 4, 5] to [5, 4, 3, 2, 1]
        # first run:
        #   None 1 > 2 > 3 > 4 > None
        #  prev curr
        #    prev < 1 2 > 3 > 4
        #        1=curr 2=nxtNode
        #          1=prev
        #          2=curr
        #          3=nxtNode, 1=curr.next

# time = O(n) 
# space = O(1) constant space because the count stays fixed

def buildLinkedList(values):
    dummy = ListNode() # init dummy node; dummy -> 1 -> 2 -> 3 ...
    tail = dummy # tail pointer starts at dummy node

    for num in values: # for every element in values
        newNode = ListNode(val=num) # create a new node, 
        tail.next = newNode # old node (tail) points to new node
        tail = newNode # move tail along

    return dummy.next # return the head which is the value next to dummy

def printLinkedList(head):
    curr = head # start curr at head of list

    while curr: # while curr exists
        print(f"{curr.val} -> ", end="") # print the curr node's val
        curr = curr.next # move pointer along

    print("None") # finished list

if __name__ == "__main__":
    head = buildLinkedList([1, 2, 3, 4, 5])
    printLinkedList(head)
    result = Solution().reverseList(head)
    printLinkedList(result)
