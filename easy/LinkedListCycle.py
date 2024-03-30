# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :return type: bool
        """
        while head:
            if head.val == 100001:
                return True
            head.val = 100001
            head = head.next
        return False
    

    
s = Solution()
node3 = ListNode(3)
node2 = ListNode(2)
node0 = ListNode(0)
nodeN = ListNode(-4)

node3.next = node2
node2.next = node0
node0.next = nodeN
nodeN.next = node2

print(s.hasCycle(node3))

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# class Solution(object):
#     def hasCycle(self, head):
#         """
#         :type head: ListNode
#         :rtype: bool
#         """
#         if not head or not head.next:
#             return False
        
#         slow = head
#         fast = head.next
        
#         while slow != fast:
#             if not fast or not fast.next:
#                 return False
#             slow = slow.next
#             fast = fast.next.next
            
#         return True