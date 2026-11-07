from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# You’re given the heads of two sorted linked lists, list1 and list2. Merge them into one sorted list made by splicing together the nodes of the first two lists, and return the head of the merged list.

# Example 1
# Input: list1 = [1,2,4], list2 = [1,3,4]
# Output: [1,1,2,3,4,4]

# Example 2
# Input: list1 = [], list2 = []
# Output: []

# Example 3
# Input: list1 = [], list2 = [0]
# Output: [0]

# Constraints

# Each list has 0 to 50 nodes.
# -100 <= Node.val <= 100
# Both lists are sorted in non-decreasing order.

# helper func to build out linked lists from arr
def buildLLs(values):
    dummy = ListNode() # init dummy list
    tail = dummy 

    for num in values:
        newNode = ListNode(val=num) # create new node for value
        tail.next = newNode # connect node to dummy
        tail = newNode # move tail along

    return dummy.next # return the head 


class Solution:
    def mergeLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode() # dummy -> 
        tail = dummy

        while list1 and list2:
            if list1.val < list2.val:
                tail.next = list1 # connect the lesser value to the dummy node which begins as the head of the LL; this would connect the whole list unless i find a way to iterate through each node so how to do that... 
                # move along tail pointer
                tail = tail.next
                list1 = list1.next
            else:
                tail.next = list2
                tail = tail.next
                list2 = list2.next

        # attach the leftover nodes from either list
        if list1:
            tail.next = list1
        if list2:
            tail.next = list2

        return dummy.next

# helper print function
def printLL(head):
    curr = head

    while curr:
        print(f"{curr.val} -> ", end="")
        curr = curr.next

    print("None")

if __name__ == "__main__":
    a = [1, 2, 3, 4, 5]
    b = [2, 4, 5, 6, 7]
    LL1 = buildLLs(a)
    LL2 = buildLLs(b)



    mergedList = Solution().mergeLists(LL1, LL2)
    printLL(mergedList)
    printLL(Solution().mergeLists(buildLLs([]), buildLLs([])))
    printLL(Solution().mergeLists(buildLLs([]), buildLLs([0])))

# time: O(n+m) list1 = n list2 = m; max runs is n + m
# space: O(1) cause constant variables 
