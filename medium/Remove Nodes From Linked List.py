class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def removeNodes(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        stack = []
        cur = head
        while cur:
            while stack and stack[-1].val < cur.val:
                stack.pop()
            stack.append(cur)
            cur = cur.next

        nxt = None
        while stack:
            cur = stack.pop()
            cur.next = nxt
            nxt = cur
        return cur


s = Solution()
one = ListNode(8)
two = ListNode(3, one)
three = ListNode(13, two)
four = ListNode(2, three)
five = ListNode(5, four)
head = five
# while head:
#     print(head.val, end=" ")
#     head = head.next
# print()

cur = s.removeNodes(head)

while cur:
    print(cur.val, end=' ')
    cur = cur.next