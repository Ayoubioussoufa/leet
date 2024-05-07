# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def doubleIt(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        stri = ''
        curr = head
        while curr:
            stri += str(curr.val)
            curr = curr.next
        doubled_val = int(stri) * 2
        doubled_val_str = str(doubled_val)
        new_head = None
        previous = None
        for digit in doubled_val_str:
            node = ListNode(int(digit))
            if new_head is None:
                new_head = node
            else:
                previous.next = node
            previous = node
        return new_head
            
        
        
s = Solution()
one = ListNode(8)
two = ListNode(3, one)
three = ListNode(13, two)
four = ListNode(2, three)
five = ListNode(5, four)
head = five

cur = s.doubleIt(head)

while cur:
    print(cur.val, end=' ')
    cur = cur.next