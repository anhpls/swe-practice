from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverse(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dummy = ListNode(0, next=head)
        # dummy -> head -> 
        prev = dummy
        
        for _ in range(left - 1):
            prev = prev.next
        
        # 1. dummy -> 1 -> 2 -> 3 -> 4 -> 5 -> 6
        # 2. prev
        # 3.       prev  left           right
        # 4.             curr 
        # 5.                   temp
        # 6.                   
        curr = prev.next
        temp = curr.next

        for _ in range(right - left):
            curr.next = temp.next
            temp.next = prev.next
            prev.next = temp
            temp = curr.next

        return dummy.next
    
def print_list(node):
    while node:
        print(node.val, end=" -> " if node.next else "\n")
        node = node.next
    
if __name__ == "__main__":
    s = Solution()

    a = ListNode(1)
    b = ListNode(2)
    c = ListNode(3)
    d = ListNode(4)

    a.next = b
    b.next = c
    c.next = d

    head = a
    left = 2
    right = 3

    result = Solution().reverse(head, left, right)
    print_list(result)

